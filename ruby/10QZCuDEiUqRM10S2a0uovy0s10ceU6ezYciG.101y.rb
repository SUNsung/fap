
        
              case Rails.env
      when 'development'
        config.eager_load = false
      when 'test'
        config.eager_load = false
      when 'production'
        config.eager_load = true
      end
    end
  end
end
    
          if (pkt.payload =~ self.sigs[k])
        matched = k
        matches = [$1,$2]
      end