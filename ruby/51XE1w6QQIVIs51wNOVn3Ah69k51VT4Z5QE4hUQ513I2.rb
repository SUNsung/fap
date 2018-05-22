
        
        Then(%r!^I should get a non-zero exit(?:\-| )status$!) do
  step %(I should not see 'EXIT STATUS: 0' in the build output)
end

    
    require 'json'
require 'open-uri'
    
        def self.git_log_between(pretty_format, from, to, merge_commit_filtering, date_format = nil, ancestry_path)
      command = ['git log']
      command << '--pretty=\'#{pretty_format}\''
      command << '--date=\'#{date_format}\'' if date_format
      command << '--ancestry-path' if ancestry_path
      command << '#{from.shellescape}...#{to.shellescape}'
      command << git_log_merge_commit_filtering_option(merge_commit_filtering)
      Actions.sh(command.compact.join(' '), log: false).chomp
    rescue
      nil
    end
    
          # Run a certain action
      def trigger(task: nil, flags: nil, serial: nil, print_command: true, print_command_output: true)
        android_serial = (serial != '') ? 'ANDROID_SERIAL=#{serial}' : nil
        command = [android_serial, escaped_gradle_path, task, flags].compact.join(' ')
        Action.sh(command, print_command: print_command, print_command_output: print_command_output)
      end
    
            expect(result).to eq('/usr/local/bin/cloc  --by-file --xml  --out=build/cloc.xml MyCoolApp')
      end
    
        # Check if proper Lockable module methods are present & unlock strategy
    # allows to unlock resource on password reset
    def unlockable?(resource)
      resource.respond_to?(:unlock_access!) &&
        resource.respond_to?(:unlock_strategy_enabled?) &&
        resource.unlock_strategy_enabled?(:email)
    end
    
        def reset_password_instructions(record, token, opts={})
      @token = token
      devise_mail(record, :reset_password_instructions, opts)
    end
    
          # Remembers the given resource by setting up a cookie
      def remember_me(resource)
        return if request.env['devise.skip_storage']
        scope = Devise::Mapping.find_scope!(resource)
        resource.remember_me!
        cookies.signed[remember_key(resource, scope)] = remember_cookie_values(resource)
      end
    
          generate_helpers!(Devise::URL_HELPERS)
    
          def headers_for(action, opts)
        headers = {
          subject: subject_for(action),
          to: resource.email,
          from: mailer_sender(devise_mapping),
          reply_to: mailer_reply_to(devise_mapping),
          template_path: template_paths,
          template_name: action
        }.merge(opts)
    
            %w(modals dropdowns scrollspy tabs tooltips popovers alerts buttons collapse carousel affix).each do |dom_id|
          css('##{dom_id}-options + p + div tbody td:first-child').each do |node|
            name = node.content.strip
            id = node.parent['id'] = '#{dom_id}-#{name.parameterize}-option'
            name.prepend '#{dom_id.singularize.titleize}: '
            name << ' (option)'
            entries << [name, id]
          end
    
    class StringPatch < EmbeddedPatch
  def initialize(strip, str)
    super(strip)
    @str = str
  end
    
      class Satisfier
    def initialize(options, &block)
      case options
      when Hash
        @options = { build_env: true }
        @options.merge!(options)
      else
        @satisfied = options
      end
      @proc = block
    end
    
      def prefixes
    prefixes = ['/bin', '/usr/bin', '/usr/libexec', xcode_app_path]
    prefixes << `brew --prefix`.strip unless `which brew`.strip.empty?
    
    ```
#{plugins_string}
```
#{markdown_podfile}
EOS
      end