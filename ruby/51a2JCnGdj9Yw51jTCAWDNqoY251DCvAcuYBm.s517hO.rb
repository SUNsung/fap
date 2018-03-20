
        
            def to_json
      JSON.generate(as_json)
    end
  end
end

    
        def self.join(*args)
      PARSER.join(*args)
    end
    
          def get_type
        case slug
        when 'api'
          'Reference'
        when 'configuration'
          'Reference: Configuration'
        when 'stpl'
          'Reference: SimpleTemplate'
        when 'plugindev'
          'Reference: Plugin'
        else
          'Manual'
        end
      end
    
    ###
### dependencies
###