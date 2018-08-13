
        
          validate :enough_poll_answers
  validates :question, presence: true
    
        on :fetch_public_entity do |entity_type, guid|
      entity = Diaspora::Federation::Mappings.model_class_for(entity_type).all_public.find_by(guid: guid)
      case entity
      when Post
        Diaspora::Federation::Entities.post(entity)
      when Poll
        Diaspora::Federation::Entities.status_message(entity.status_message)
      end
    end
    
            private
    
    ```
#{plugins_string}
```
#{markdown_podfile}
EOS
      end
    
            def self.options
          [
            ['--template-url=URL', 'The URL of the git repo containing a ' \
                                  'compatible template'],
          ].concat(super)
        end
    
          def run
        update_if_necessary!