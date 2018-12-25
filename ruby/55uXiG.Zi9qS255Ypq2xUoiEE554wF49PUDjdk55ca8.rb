
        
                  def add_default_name_and_id_for_value(tag_value, options)
            if tag_value.nil?
              add_default_name_and_id(options)
            else
              specified_id = options['id']
              add_default_name_and_id(options)
    
              if name_and_id['for']
            name_and_id['id'] = name_and_id['for']
          else
            name_and_id.delete('id')
          end
    
            ActiveSupport::Notifications.instrument('render_#{name}.action_view', options) do |payload|
          yield payload
        end
      end
    
        # Direct access to template rendering.
    def render_template(context, options) #:nodoc:
      TemplateRenderer.new(@lookup_context).render(context, options)
    end
    
        # Pass a action alias symbol (e.g. :enable_automatic_code_signing)
    # and this method will return a reference to the action class
    # if it exists. In case the action with this alias can't be found
    # this method will return nil.
    def class_reference_from_action_alias(method_sym)
      alias_found = find_alias(method_sym.to_s)
      return nil unless alias_found
    
        def did_show_message?
      file_name = '.did_show_opt_info'
    
            # From https://stackoverflow.com/a/4789702/445598
        # We do this to make the actual error message red and therefore more visible
        reraise_formatted!(e, e.message)
      end
    end
    
          it 'doesn't add a no-use-binaries flag to command if use_binaries is set to true' do
        result = Fastlane::FastFile.new.parse('lane :test do
            carthage(
              use_binaries: true
            )
          end').runner.execute(:test)
    
          it 'generates the correct git command with an array of paths' do
        result = Fastlane::FastFile.new.parse('lane :test do
          git_commit(path: ['./fastlane/README.md', './LICENSE'], message: 'message')
        end').runner.execute(:test)
    
        def help_default_value
      return '#{self.default_value} *'.strip if self.default_value_dynamic
      return '' if self.default_value.nil?
      return '''' if self.default_value.instance_of?(String) && self.default_value.empty?
      return ':#{self.default_value}' if self.default_value.instance_of?(Symbol)
    
            def sidekiq_worker_class
          ImportDiffNoteWorker
        end
    
              lfs_objects.each do |object|
            yield object
          end
        rescue StandardError => e
          Rails.logger.error('The Lfs import process failed. #{e.message}')
        end
      end
    end
  end
end

    
            # Builds a note from a GitHub API response.
        #
        # note - An instance of `Sawyer::Resource` containing the note details.
        def self.from_api_response(note)
          matches = note.html_url.match(NOTEABLE_TYPE_REGEX)
    
            transaction.action = action_name(env)
        transaction.act_upon_results
    
    require_relative 'converter/fonts_conversion'
require_relative 'converter/less_conversion'
require_relative 'converter/js_conversion'
require_relative 'converter/logger'
require_relative 'converter/network'
    
      # Set to :debug to see everything in the log.
  config.log_level = :info
    
    Given(/^a task which executes as root$/) do
  TestApp.copy_task_to_test_app('spec/support/tasks/root.rake')
end
    
            # Note that `scm_plugin_installed?` comes from Capistrano::DSL
        if scm_plugin_installed?
          delete(:scm)
          return
        end
    
          def set(key, value=nil, &block)
        @trusted_keys << key if trusted? && !@trusted_keys.include?(key)
        remember_location(key)
        values[key] = block || value
        trace_set(key)
        values[key]
      end