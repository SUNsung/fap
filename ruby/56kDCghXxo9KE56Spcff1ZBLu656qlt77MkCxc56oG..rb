
        
              it 'splits correctly' do
        expected = [
          'One',
          'Two',
          'Three',
          'Four Token',
          'Or',
          'Newlines',
          'Everywhere'
        ]
        expect(generator.split_keywords(keywords)).to eq(expected)
      end
    end
  end
end

    
            expect(result).to eq('/usr/local/bin/cloc  --by-file --xml  --out=/tmp/cloc.xml')
      end
    
        context 'Mercurial repository' do
      before do
        allow(Fastlane::Actions::GetBuildNumberRepositoryAction).to receive(:is_svn?).and_return(false)
        allow(Fastlane::Actions::GetBuildNumberRepositoryAction).to receive(:is_git_svn?).and_return(false)
        allow(Fastlane::Actions::GetBuildNumberRepositoryAction).to receive(:is_git?).and_return(false)
        expect(Fastlane::Actions::GetBuildNumberRepositoryAction).to receive(:is_hg?).and_return(true)
      end
    
        begin
      raise '#{short_type} does not support dry-run' unless can_dry_run?
      readonly!
      @dry_run_started_at = Time.zone.now
      @dry_run_logger.info('Dry Run started')
      if event
        raise 'This agent cannot receive an event!' unless can_receive_events?
        receive([event])
      else
        check
      end
      @dry_run_logger.info('Dry Run finished')
    rescue => e
      @dry_run_logger.info('Dry Run failed')
      error 'Exception during dry-run. #{e.message}: #{e.backtrace.join('\n')}'
    end
    
        def form_configurable_attributes
      form_configurable_fields.keys
    end
  end
end

    
      module SortableTableHelper
    # :call-seq:
    #   sortable_column(attribute, default_direction = 'desc', name: attribute.humanize)
    def sortable_column(attribute, default_direction = nil, options = nil)
      if options.nil? && (options = Hash.try_convert(default_direction))
        default_direction = nil
      end
      default_direction ||= 'desc'
      options ||= {}
      name = options[:name] || attribute.humanize
      selected = @table_sort_info[:attribute].to_s == attribute
      if selected
        direction = @table_sort_info[:direction]
        new_direction = direction.to_s == 'desc' ? 'asc' : 'desc'
        classes = 'selected #{direction}'
      else
        classes = ''
        new_direction = default_direction
      end
      link_to(name, url_for(sort: '#{attribute}.#{new_direction}'), class: classes)
    end
  end
end

    
        def unknown_action!(action)
      raise NotImplementedError, <<-MESSAGE.strip_heredoc
        'Devise doesn't know how to sanitize parameters for '#{action}''.
        If you want to define a new set of parameters to be sanitized use the
        `permit` method first:
    
    module Devise
  module Controllers
    # A module that may be optionally included in a controller in order
    # to provide remember me behavior. Useful when signing in is done
    # through a callback, like in OmniAuth.
    module Rememberable
      # Return default cookie values retrieved from session options.
      def self.cookie_values
        Rails.configuration.session_options.slice(:path, :domain, :secure)
      end
    
            # This returns all the config classes for the various providers.
        #
        # @return [Hash]
        def provider_configs
          Registry.new.tap do |result|
            @registered.each do |plugin|
              result.merge!(plugin.components.configs[:provider])
            end
          end
        end
    
          class << self
        # Mark a given block of code as a 'busy' block of code, which will
        # register a SIGINT handler for the duration of the block. When a
        # SIGINT occurs, the `sig_callback` proc will be called. It is up
        # to the callback to behave properly and exit the application.
        def busy(sig_callback)
          register(sig_callback)
          return yield
        ensure
          unregister(sig_callback)
        end
    
              @env.action_runner.run(Vagrant::Action.action_box_remove, {
            box_name:     argv[0],
            box_provider: options[:provider],
            box_version:  options[:version],
            force_confirm_box_remove: options[:force],
            box_remove_all_versions: options[:all],
          })