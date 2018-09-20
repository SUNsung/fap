
        
                  def sanitized_object_name
            @sanitized_object_name ||= @object_name.gsub(/\]\[|[^-a-zA-Z0-9:.]/, '_').sub(/_$/, '')
          end
    
              def hidden_field_for_checkbox(options)
            @unchecked_value ? tag('input', options.slice('name', 'disabled', 'form').merge!('type' => 'hidden', 'value' => @unchecked_value)) : ''.html_safe
          end
      end
    end
  end
end

    
                  Time.utc(
                default[:year], default[:month], default[:day],
                default[:hour], default[:min], default[:sec]
              )
            end
          end
      end
    end
  end
end

    
              add_default_name_and_id_for_value(tag_value, name_and_id)
          options.delete('index')
          options.delete('namespace')
          options['for'] = name_and_id['id'] unless options.key?('for')
    
    require 'action_view/helpers/tags/placeholderable'
    
                if only = conditions[:only]
              only.include?(action_name)
            elsif except = conditions[:except]
              !except.include?(action_name)
            else
              true
            end
          end
      end
    
        def cache_message(payload) # :doc:
      case payload[:cache_hit]
      when :hit
        '[cache hit]'
      when :miss
        '[cache miss]'
      end
    end
    
            def #{name}=(value)
          value = value.present? ? Array(value) : default_#{name}
          _set_detail(:#{name}, value) if value != @details[:#{name}]
        end
      METHOD
    end
    
    def docs_name
  '#{name}-docs'
end
    
    # For this pull request, which changes Page#dir
# https://github.com/jekyll/jekyll/pull/4403
    
    def graceful_require
  Jekyll::External.require_with_graceful_fail('json')
  JSON.pretty_generate(DATA)
end
    
    #
    
      def self.status_file; test_dir.join('jekyll_status.txt'); end
    
            # rubocop:disable Metrics/AbcSize
        def process(args, opts)
          if !args || args.empty?
            raise Jekyll::Errors::InvalidThemeName, 'You must specify a theme name.'
          end
    
    require 'cucumber/rails'
    
      def confirm_on_page(page_name)
    if page_name == 'my profile page'
      expect(page).to have_path_in([person_path(@me.person), user_profile_path(@me.username)])
    else
      expect(page).to have_path(path_to(page_name))
    end
  end
end
    
        it 'generates the aspects_manage_contacts_json fixture', fixture: true do
      # adds one not mutual contact
      bob.share_with(FactoryGirl.create(:person), @aspect)
    
        it 'generates a jasmine fixture', fixture: true do
      session[:mobile_view] = true
      get :new, format: :mobile
      save_fixture(html_for('body'), 'conversations_new_mobile')
    end
  end
end

    
      def migration_name
    'add_attachment_#{attachment_names.join('_')}_to_#{name.underscore.pluralize}'
  end
    
        def self.register(klass, attachment_name, attachment_options)
      instance.register(klass, attachment_name, attachment_options)
    end
    
        def type_from_file_contents
      type_from_mime_magic || type_from_file_command
    rescue Errno::ENOENT => e
      Paperclip.log('Error while determining content type: #{e}')
      SENSIBLE_DEFAULT
    end