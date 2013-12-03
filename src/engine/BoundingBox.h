/**
 * @file BoundingBox.h
 *
 * @author Jan Du�ek <xdusek17@stud.fit.vutbr.cz>
 * @date 2013
 */

#ifndef BOUNDING_BOX_H
#define BOUNDING_BOX_H

#include <glm/glm.hpp>

/**
 * Axis aligned bounding box.
 * Can be one, two or three dimensional.
 */
class BoundingBox
{
public:
	/// Creates bounding box representing point in (0, 0, 0).
	BoundingBox() { }
	/// Creates bounding box representing point.
	BoundingBox(const glm::vec3& point);
	/// Creates bounding box from min and max points.
	BoundingBox(const glm::vec3& min, const glm::vec3& max);

	/// Gets minimum point
	const glm::vec3& min() const {
		return m_min;
	}

	/// Gets maximum point
	const glm::vec3& max() const {
		return m_max;
	}

	/// Enlarges bounding box to include given point
	void expandToInclude(const glm::vec3& point);
	/// Enlarges bounding box to include another bounding box
	void expandToInclude(const BoundingBox& bbox);

	/// Gets index of dimension where bbox has maximum size
	int maxDimension() const;
private:
	glm::vec3 m_min;
	glm::vec3 m_max;
	glm::vec3 m_extent;
};

#endif // BOUNDING_BOX_H
