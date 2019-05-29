
        
        WITH_JUST_LIQUID_VAR = <<-LIQUID.freeze
Lorem ipsum dolor sit amet, consectetur adipiscing elit. Fusce auctor libero at
pharetra tempus. et metus fermentum, eu cursus lorem, ac dictum enim.
mattis. Curabitur vel dui et lacus rutrum suscipit et {{ title }} neque.
    
    def pre_pr(url)
  url[-1, 1] == FORWARD_SLASH ? url : File.dirname(url)
end
    
    if pathutil_relative == native_relative
  Benchmark.ips do |x|
    x.report('pathutil') { pathutil_relative }
    x.report('native')   { native_relative }
    x.compare!
  end
else
  print 'PATHUTIL: '
  puts pathutil_relative
  print 'NATIVE:   '
  puts native_relative
end

    
    module Jekyll
  module Filters
    module GroupingFilters
      # Group an array of items by a property
      #
      # input - the inputted Enumerable
      # property - the property
      #
      # Returns an array of Hashes, each looking something like this:
      #  {'name'  => 'larry'
      #   'items' => [...] } # all the items where `property` == 'larry'
      def group_by(input, property)
        if groupable?(input)
          groups = input.group_by { |item| item_property(item, property).to_s }
          grouped_array(groups)
        else
          input
        end
      end
    
          def self.example_code
        [
          'add_git_tag # simple tag with default values',
          'add_git_tag(
            grouping: 'fastlane-builds',
            prefix: 'v',
            postfix: '-RC1',
            build_number: 123
          )',
          '# Alternatively, you can specify your own tag. Note that if you do specify a tag, all other arguments are ignored.
          add_git_tag(
            tag: 'my_custom_tag'
          )'
        ]
      end
    
          it 'properly shell escapes its message' do
        tag = '2.0.0'
        message = 'message with 'quotes' (and parens)'
    
          it 'should shell escape keychain names when checking for installation' do
        expect(FastlaneCore::CertChecker).to receive(:wwdr_keychain).and_return(keychain_name)
        expect(FastlaneCore::Helper).to receive(:backticks).with(name_regex, anything).and_return('')
    
        alias_method :insert_before, :insert
    
    module Docs
  class Entry
    class Invalid < StandardError; end
    
          def additional_options
        if self.class.internal_urls
          super.merge! \
            only: self.class.internal_urls.to_set,
            only_patterns: nil,
            skip: nil,
            skip_patterns: nil,
            skip_links: nil,
            fixed_internal_urls: true
        else
          super
        end
      end
    
        delegate :puts, :print, :tty?, to: :$stdout
    
              node.before(%(<div class='pre-title'>#{node['title']}</div>)) if node['title']
    
            name.prepend '#{breadcrumbs.join('.')}#' if breadcrumbs.present? && breadcrumbs[0] != name
        name << '()' if %w(Function Method Constructor).include?(subtitle)
        name
      end
    
            css('.toplang', '#quickview', '.top').remove
    
          if new_email != @user.email
        @user.update!(
          unconfirmed_email: new_email,
          # Regenerate the confirmation token:
          confirmation_token: nil
        )
    
        def destroy
      authorize @report_note, :destroy?
      @report_note.destroy!
      redirect_to admin_report_path(@report_note.report_id), notice: I18n.t('admin.report_notes.destroyed_msg')
    end
    
      before_action :require_user!
    
        system_command '#{staged_path}/AdobePatchInstaller.app/Contents/MacOS/AdobePatchInstaller',
                   args: [
                           '--mode=silent',
                         ],
                   sudo: true
  end
    
    source 'https://rubygems.org'
    
        <div id='backtrace' class='condensed'>
      <h3>BACKTRACE</h3>
      <p><a href='#' id='expando'
            onclick='toggleBacktrace(); return false'>(expand)</a></p>
      <p id='nav'><strong>JUMP TO:</strong>
         <% unless bad_request?(exception) %>
            <a href='#get-info'>GET</a>
            <a href='#post-info'>POST</a>
         <% end %>
         <a href='#cookie-info'>COOKIES</a>
         <a href='#env-info'>ENV</a>
      </p>
      <div class='clear'></div>
    
      # set version
  content.sub! /(s\.version.*=\s+).*/, '\\1\'#{Rack::Protection::VERSION}\''
    
          def empty_cookie(host, path)
        {:value => '', :domain => host, :path => path, :expires => Time.at(0)}
      end
    
        def options_config=(options_config)
      loaded_config = ConfigLoader.load_file(options_config)
      @options_config = ConfigLoader.merge_with_default(loaded_config,
                                                        options_config)
    end
    
              lambda do |corrector|
            swap_range(corrector, current_range, previous_range)
          end
        end
    
              ignored_end_pos = if ignored_loc.respond_to?(:heredoc_body)
                              ignored_loc.heredoc_end.end_pos
                            else
                              ignored_loc.expression.end_pos
                            end
          ignored_end_pos >= node.source_range.end_pos
        end
      end
    
            MESSAGES = [
          'Passing safe_level with the 2nd argument of `ERB.new` is ' \
          'deprecated. Do not use it, and specify other arguments as ' \
          'keyword arguments.',
          'Passing trim_mode with the 3rd argument of `ERB.new` is ' \
          'deprecated. Use keyword argument like ' \
          '`ERB.new(str, trim_mode: %<arg_value>s)` instead.',
          'Passing eoutvar with the 4th argument of `ERB.new` is ' \
          'deprecated. Use keyword argument like ' \
          '`ERB.new(str, eoutvar: %<arg_value>s)` instead.'
        ].freeze
    
    chdir APP_ROOT do
  # This script is a starting point to setup your application.
  # Add necessary setup steps to this file.
    
      # Specifies the header that your server uses for sending files.
  # config.action_dispatch.x_sendfile_header = 'X-Sendfile' # for Apache
  # config.action_dispatch.x_sendfile_header = 'X-Accel-Redirect' # for NGINX
    
      config.action_mailer.perform_caching = false