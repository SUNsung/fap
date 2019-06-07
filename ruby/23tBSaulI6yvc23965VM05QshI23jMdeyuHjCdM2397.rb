
        
            req_types.each do |req_type, _|
      key = redis_key(req_type, date)
      $redis.del key
    end
  end