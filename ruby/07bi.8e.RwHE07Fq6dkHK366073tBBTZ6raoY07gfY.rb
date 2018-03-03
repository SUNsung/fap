
        
          included do
    helper SortableTableHelper
  end
    
            private
    
            def initialize(argv)
          @pod_name = argv.shift_argument
          @short_output = argv.flag?('short')
          super
        end
    
            def listen
          while repl_command = STDIN.gets
            execute_repl_command(repl_command)
          end
        end
    
          def plugin_gem_names
        (Gem.loaded_specs.keys - ['capistrano']).grep(/capistrano/).sort
      end
    end
  end
end

    
      # Implemented by subclasses to define Rake tasks. Typically a plugin will call
  # `eval_rakefile` to load Rake tasks from a separate .rake file.
  #
  # Example:
  #
  #   def define_tasks
  #     eval_rakefile File.expand_path('../tasks.rake', __FILE__)
  #   end
  #
  # For simple tasks, you can define them inline. No need for a separate file.
  #
  #   def define_tasks
  #     desc 'Do something fantastic.'
  #     task 'my_plugin:fantastic' do
  #       ...
  #     end
  #   end
  #
  def define_tasks; end
    
        def possible_types
      MIME::Types.type_for(@filepath).collect(&:content_type)
    end
    
        # Returns a the attachment hash.  See Paperclip::Attachment#hash_key for
    # more details.
    def hash attachment=nil, style_name=nil
      if attachment && style_name
        attachment.hash_key(style_name)
      else
        super()
      end
    end
    
          class ValidateAttachmentContentTypeMatcher
        def initialize attachment_name
          @attachment_name = attachment_name
          @allowed_types = []
          @rejected_types = []
        end