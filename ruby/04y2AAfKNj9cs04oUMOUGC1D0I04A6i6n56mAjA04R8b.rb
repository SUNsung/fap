
        
              if options[:type] == :array && (options[:values].blank? || !options[:values].is_a?(Array))
        raise ArgumentError.new('When using :array as :type you need to provide the :values as an Array')
      end
    
      def tumblr_consumer_secret
    ENV['TUMBLR_OAUTH_SECRET']
  end
    
    require 'open3'
    
    class AdminsController < Admin::AdminController
  include ApplicationHelper
    
      # Implemented by subclasses to hook into Capistrano's deployment flow using
  # using the `before` and `after` DSL methods. Note that `register_hooks` will
  # not be called if the user has opted-out of hooks when installing the plugin.
  #
  # Example:
  #
  #   def register_hooks
  #     after 'deploy:updated', 'my_plugin:do_something'
  #   end
  #
  def register_hooks; end
    
              it 'returns all release servers' do
            expect(subject.map(&:hostname)).to eq %w{example1.com example2.com example3.com example4.com}
          end
        end
    
    When /^(?:|I )fill in '([^']*)' with '([^']*)'$/ do |field, value|
  fill_in(field, :with => value)
end
    
        def definitions_for(klass)
      parent_classes = klass.ancestors.reverse
      parent_classes.each_with_object({}) do |ancestor, inherited_definitions|
        inherited_definitions.deep_merge! @attachments[ancestor]
      end
    end
  end
end

    
            def rejected_types_rejected?
          @missing_rejected_types ||= @rejected_types.select { |type| type_allowed?(type) }
          @missing_rejected_types.none?
        end
      end
    end
  end
end

    
            def failure_message_when_negated
          'Attachment #{@attachment_name} cannot be between #{@low} and #{@high} bytes'
        end
        alias negative_failure_message failure_message_when_negated
    
            raise LoadError, 'Could not find the '#{name}' processor in any of these paths: #{directories.join(', ')}' unless required.any?
      end
    end
    
          def check_validity!
        unless options.has_key?(:content_type) || options.has_key?(:not)
          raise ArgumentError, 'You must pass in either :content_type or :not to the validator'
        end
      end
    end