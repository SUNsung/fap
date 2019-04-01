        Redis::Cache.with do |redis|
          redis.expire(key, timeout)
        end
      end
    
            yield Page.new(collection, page)
    
            def id_for_already_imported_cache(note)
          note.id
        end
      end
    end
  end
end

    
          # The base cache key to use for tracking already imported objects.
      ALREADY_IMPORTED_CACHE_KEY =
        'github-importer/already-imported/%{project}/%{collection}'.freeze
    
            if has_vector?(request, headers)
          warn env, 'attack prevented by #{self.class}'
    
        # Returns the id of the instance in a split path form. e.g. returns
    # 000/001/234 for an id of 1234.
    def id_partition attachment, style_name
      case id = attachment.instance.id
      when Integer
        if id < ID_PARTITION_LIMIT
          ('%09d'.freeze % id).scan(/\d{3}/).join('/'.freeze)
        else
          ('%012d'.freeze % id).scan(/\d{3}/).join('/'.freeze)
        end
      when String
        id.scan(/.{3}/).first(3).join('/'.freeze)
      else
        nil
      end
    end