
        
                    sequence_base := (
              'x' ||
              -- Take the first two bytes (four hex characters)
              substr(
                -- Of the MD5 hash of the data we documented
                md5(table_name ||
                  '#{SecureRandom.hex(16)}' ||
                  time_part::text
                ),
                1, 4
              )
            -- And turn it into a bigint
            )::bit(16)::bigint;
    
      attributes :id, :type, :name, :updated