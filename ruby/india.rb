
        
            return if Language::Python.reads_brewed_pth_files?('python')
    
      def describe_ruby
    ruby = which 'ruby'
    return 'N/A' if ruby.nil?
    ruby_binary = Utils.popen_read ruby, '-rrbconfig', '-e', \
      'include RbConfig;print'#{CONFIG['bindir']}/#{CONFIG['ruby_install_name']}#{CONFIG['EXEEXT']}''
    ruby_binary = Pathname.new(ruby_binary).realpath
    if ruby == ruby_binary
      ruby
    else
      '#{ruby} => #{ruby_binary}'
    end
  end
    
          if tap.core_tap?
        new_full_name = new_name
      else
        new_full_name = '#{tap}/#{new_name}'
      end
    
        if filter.include? key
      filter.delete key
    else
      filter << key
    end
    
          def provider
        oauth['provider']
      end
    
          def find_oauth_access_token
        token = Doorkeeper::OAuth::Token.from_request(current_request, *Doorkeeper.configuration.access_token_methods)
        return unless token
    
              builds = scope_relevant.select('count(*)').to_sql
          created = scope_relevant.created.select('count(*)').to_sql
          success = scope_relevant.success.select('count(*)').to_sql
          manual = scope_relevant.manual.select('count(*)').to_sql
          pending = scope_relevant.pending.select('count(*)').to_sql
          running = scope_relevant.running.select('count(*)').to_sql
          skipped = scope_relevant.skipped.select('count(*)').to_sql
          canceled = scope_relevant.canceled.select('count(*)').to_sql
          warnings = scope_warnings.select('count(*) > 0').to_sql
    
            MergeRequest
          .where(id: start_id..stop_id)
          .where(latest_merge_request_diff_id: nil)
          .each_batch(of: BATCH_SIZE) do |relation|
    
            def metadata
          @metadata ||= Pipeline::Metadata.new(self)
        end
    
    group :docs do
  gem 'typhoeus'
  gem 'nokogiri'
  gem 'html-pipeline'
  gem 'image_optim'
  gem 'image_optim_pack', platforms: :ruby
  gem 'progress_bar', require: false
  gem 'unix_utils', require: false
  gem 'tty-pager', require: false
end
    
        private
    
        def at_css(*args)
      doc.at_css(*args)
    end
    
        def path
      @path ||= url.path
    end
    
            css('.l-sub-section', '.alert', '.banner').each do |node|
          node.name = 'blockquote'
        end
    
            css('.multi-line-signature').each do |node|
          node.name = 'pre'
          node.content = node.content.strip
        end
    
            name.prepend '#{breadcrumbs.join('.')}#' if breadcrumbs.present? && breadcrumbs[0] != name
        name << '()' if %w(Function Method Constructor).include?(subtitle)
        name
      end
    
            # Get the machine
        machine = nil
        begin
          machine = env.machine(self.name.to_sym, self.provider.to_sym)
        rescue Errors::MachineNotFound
          return false
        end
    
                # Call the state method so that we update our index state. Don't
            # worry about exceptions here, since we just care about updating
            # the cache.
            begin
              # Called for side effects
              machine.state
            rescue Errors::VagrantError
            end
          end
        end
    
    When /^I reset Bundler environment variable$/ do
  BUNDLE_ENV_VARS.each do |key|
    ENV[key] = nil
  end
end
    
    class PaperclipGenerator < ActiveRecord::Generators::Base
  desc 'Create a migration to add paperclip-specific fields to your model. ' +
       'The NAME argument is the name of your model, and the following ' +
       'arguments are the name of the attachments'
    
        def names_for(klass)
      @attachments[klass].keys
    end
    
        def calculated_type_matches
      possible_types.select do |content_type|
        content_type == type_from_file_contents
      end
    end