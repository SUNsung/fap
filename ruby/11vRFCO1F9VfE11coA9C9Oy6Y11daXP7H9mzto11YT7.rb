
        
                # see http://www.w3.org/TR/html4/types.html#type-name
        def sanitize_to_id(name)
          name.to_s.delete(']').tr('^-a-zA-Z0-9:.', '_')
        end
    
    module ActionView #:nodoc:
  # = Action View Raw Output Helper
  module Helpers #:nodoc:
    module OutputSafetyHelper
      # This method outputs without escaping a string. Since escaping tags is
      # now default, this can be used when you don't want Rails to automatically
      # escape tags. This is not recommended if the data is coming from the user's
      # input.
      #
      # For example:
      #
      #  raw @user.name
      #  # => 'Jimmy <alert>Tables</alert>'
      def raw(stringish)
        stringish.to_s.html_safe
      end
    
              def hidden_field_for_checkbox(options)
            @unchecked_value ? tag('input', options.slice('name', 'disabled', 'form').merge!('type' => 'hidden', 'value' => @unchecked_value)) : ''.html_safe
          end
      end
    end
  end
end

    
            class RadioButtonBuilder < Builder # :nodoc:
          def radio_button(extra_html_options = {})
            html_options = extra_html_options.merge(@input_html_options)
            html_options[:skip_default_ids] = false
            @template_object.radio_button(@object_name, @method_name, @value, html_options)
          end
        end
    
            # If no layout is supplied, look for a template named the return
        # value of this method.
        #
        # ==== Returns
        # * <tt>String</tt> - A template name
        def _implied_layout_name
          controller_path
        end
    end
    
            def self.find_by_email(email, adapter)
          email_fields = adapter.config.attributes['email']
    
            def value_color
          case @status
          when 95..100 then STATUS_COLOR[:good]
          when 90..95 then STATUS_COLOR[:acceptable]
          when 75..90 then STATUS_COLOR[:medium]
          when 0..75 then STATUS_COLOR[:low]
          else
            STATUS_COLOR[:unknown]
          end
        end
      end
    end
  end
end

    
          spec['version'] = Bootstrap::VERSION
    
    # If you set this to false, any error raised from within your app will bubble
# up to your step definition and out to cucumber unless you catch it somewhere
# on the way. You can make Rails rescue errors and render error pages on a
# per-scenario basis by tagging a scenario or feature with the @allow-rescue tag.
#
# If you set this to true, Rails will rescue all errors and render error
# pages, more or less in the same way your application would behave in the
# default production environment. It's not recommended to do this for all
# of your scenarios, as this makes it hard to discover errors in your application.
ActionController::Base.allow_rescue = false
    
      class PostToService < Base
    def perform(*_args)
      # don't post to services in cucumber
    end
  end
    
      # fill the password reset form
  def fill_password_reset_form(new_pass, confirm_pass)
    fill_in 'user_password', :with => new_pass
    fill_in 'user_password_confirmation', :with => confirm_pass
  end
    
        it 'returns a 404 for a post not visible to the user' do
      sign_in eve
      expect {
        get :index, params: {post_id: @message.id}
      }.to raise_error(ActiveRecord::RecordNotFound)
    end