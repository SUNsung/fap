
        
                def uid
          @uid ||= Gitlab::Utils.force_utf8(auth_hash.uid.to_s)
        end
    
          def to_markdown
        '[![#{title}](#{image_url})](#{link_url})'
      end
    
            def template
          @template ||= Pipeline::Template.new(self)
        end
      end
    end
  end
end

    
            def initialize(badge)
          @entity = badge.entity
          @status = badge.status
        end