
        
        			if (ghostOverlaps[i]->getUserIndex() == CollisionObjectBullet::TYPE_AREA) {
				if (!static_cast<AreaBullet *>(ghostOverlaps[i]->getUserPointer())->is_monitorable())
					continue;
			} else if (ghostOverlaps[i]->getUserIndex() != CollisionObjectBullet::TYPE_RIGID_BODY)
				continue;
    
    	real_t kinematic_safe_margin;
	real_t _inv_mass;
	Vector3 _inv_inertia; // Relative to the principal axes of inertia
    
    	//motion=linear_velocity*p_step;
    
    #define ERR_FAIL_NULL(m_param)                                                                              \
	{                                                                                                       \
		if (unlikely(!m_param)) {                                                                           \
			_err_print_error(FUNCTION_STR, __FILE__, __LINE__, 'Parameter ' ' _STR(m_param) ' ' is null.'); \
			return;                                                                                         \
		} else                                                                                              \
			_err_error_exists = false;                                                                      \
	}
    
    	uint32_t *refc = _get_refcount();
    
    #endif  // MODULES_PERCEPTION_OBSTACLE_CAMERA_INTERFACE_BASE_TRANSFORMER_H_

    
    #endif /* MODULES_COMMON_MATH_MATRIX_OPERATIONS_H_ */

    
      res = ContinuousToDiscrete<float, 2, 1, 1>(m_a, m_b, m_c, m_d, ts, &prt_a_d,
                                             &prt_b_d, &prt_c_d, &prt_d_d);
    
    PredictionQuerier::PredictionQuerier(
    const std::vector<const Obstacle*>& obstacles,
    const std::shared_ptr<std::vector<common::PathPoint>>& ptr_reference_line)
    : ptr_reference_line_(ptr_reference_line) {
  for (const auto ptr_obstacle : obstacles) {
    if (id_obstacle_map_.find(ptr_obstacle->Id()) == id_obstacle_map_.end()) {
      id_obstacle_map_[ptr_obstacle->Id()] = ptr_obstacle;
      obstacles_.push_back(ptr_obstacle);
    } else {
      AWARN << 'Duplicated obstacle found [' << ptr_obstacle->Id() << ']';
    }
  }
}
    
      /**
   * @brief Get all overlapped line segments of a line segment and this polygon.
   *        There are possibly multiple overlapped line segments if this
   *        polygon is not convex.
   * @param line_segment The target line segment. To get its all overlapped
   *        line segments with this polygon.
   * @return A group of overlapped line segments.
   */
  std::vector<LineSegment2d> GetAllOverlaps(
      const LineSegment2d &line_segment) const;
    
    namespace apollo {
namespace perception {
namespace traffic_light {
    }
    }
    }