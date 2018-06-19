
        
                  UI.success('Found the certificate #{certificate.id} (#{certificate.name}) which is installed on the local machine. Using this one.')
    
      describe ':filename option handling' do
    it 'can use the filename flag from tool options' do
      stub_commander_runner_args(['-q', 'cert_name'])
    
        describe '#load_using_blocks' do
      it 'can load Appfile configurations if the setters are passed blocks instead of values.' do
        ENV['FASTLANE_PLATFORM_NAME'] = nil
        ENV['FASTLANE_LANE_NAME'] = nil
    
        def self.devices
      return {
        ScreenSize::IOS_58 => [
          [1125, 2436]
        ],
        ScreenSize::IOS_55 => [
          [1080, 1920],
          [1242, 2208]
        ],
        ScreenSize::IOS_47 => [
          [750, 1334]
        ],
        ScreenSize::IOS_40 => [
          [640, 1136],
          [640, 1096],
          [1136, 600] # landscape status bar is smaller
        ],
        ScreenSize::IOS_35 => [
          [640, 960],
          [640, 920],
          [960, 600] # landscape status bar is smaller
        ],
        ScreenSize::IOS_IPAD => [
          [1024, 748],
          [1024, 768],
          [2048, 1496],
          [2048, 1536],
          [768, 1004],
          [768, 1024],
          [1536, 2008],
          [1536, 2048]
        ],
        ScreenSize::IOS_IPAD_10_5 => [
          [1668, 2224],
          [2224, 1668]
        ],
        ScreenSize::IOS_IPAD_PRO => [
          [2732, 2048],
          [2048, 2732]
        ],
        ScreenSize::MAC => [
          [1280, 800],
          [1440, 900],
          [2880, 1800],
          [2560, 1600]
        ],
        ScreenSize::IOS_APPLE_WATCH => [
          [312, 390]
        ],
        ScreenSize::APPLE_TV => [
          [1920, 1080]
        ]
      }
    end
    
              # If the screen shot is for an appleTV we need to store it in a way that we'll know it's an appleTV
          # screen shot later as the screen size is the same as an iPhone 6 Plus in landscape.
          if screenshot.device_type == 'appleTV'
            containing_folder = File.join(folder_path, 'appleTV', screenshot.language)
          else
            containing_folder = File.join(folder_path, screenshot.language)
          end
    
        # Splits a string of keywords separated by comma or newlines into a presentable list
    # @param keywords (String)
    def split_keywords(keywords)
      keywords.split(KEYWORD_SPLITTER)
    end
  end
end

    
    class Devise::PasswordsController < DeviseController
  prepend_before_action :require_no_authentication
  # Render the #edit only if coming from a reset password email link
  append_before_action :assert_reset_token_passed, only: :edit
    
      # Check if there is no signed in user before doing the sign out.
  #
  # If there is no signed in user, it will set the flash message and redirect
  # to the after_sign_out path.
  def verify_signed_out_user
    if all_signed_out?
      set_flash_message! :notice, :already_signed_out
    
      # Get message for given
  def find_message(kind, options = {})
    options[:scope] ||= translation_scope
    options[:default] = Array(options[:default]).unshift(kind.to_sym)
    options[:resource_name] = resource_name
    options = devise_i18n_options(options)
    I18n.t('#{options[:resource_name]}.#{kind}', options)
  end
    
          private
    
          def self.generate_helpers!(routes=nil)
        routes ||= begin
          mappings = Devise.mappings.values.map(&:used_helpers).flatten.uniq
          Devise::URL_HELPERS.slice(*mappings)
        end
    
          super
      input = @options[:input]
      if File.directory?(input)
        raise 'Error: '#{input.path}' is a directory (did you mean to use --recursive?)'
      end
      output = @options[:output]
      output = input if @options[:in_place]
      process_file(input, output)
    end
    
        def setup_filters
      @filters = cmdline_filters
      @filters += @custom_filters if @custom_filters
      @filters << Filter.new(:role, ENV['ROLES']) if ENV['ROLES']
      @filters << Filter.new(:host, ENV['HOSTS']) if ENV['HOSTS']
      fh = fetch_for(:filter, {}) || {}
      @filters << Filter.new(:host, fh[:hosts]) if fh[:hosts]
      @filters << Filter.new(:role, fh[:roles]) if fh[:roles]
      @filters << Filter.new(:host, fh[:host]) if fh[:host]
      @filters << Filter.new(:role, fh[:role]) if fh[:role]
    end
    
    set_if_empty :local_user, -> { ENV['USER'] || ENV['LOGNAME'] || ENV['USERNAME'] }

    
        # we assume that the first file that requires 'sinatra' is the
    # app_file. all other path related options are calculated based
    # on this path by default.
    set :app_file, caller_files.first || $0
    
          <div id='post'>
        <h3 id='post-info'>POST</h3>
        <% if req.POST and not req.POST.empty? %>
          <table class='req'>
            <tr>
              <th>Variable</th>
              <th>Value</th>
            </tr>
            <% req.POST.sort_by { |k, v| k.to_s }.each { |key, val| %>
            <tr>
              <td><%=h key %></td>
              <td class='code'><div><%=h val.inspect %></div></td>
            </tr>
            <% } %>
          </table>
        <% else %>
          <p class='no-data'>No POST data.</p>
        <% end %>
        <div class='clear'></div>
      </div> <!-- /POST -->
    <% end %>
    
          def instrument(env)
        return unless i = options[:instrumenter]
        env['rack.protection.attack'] = self.class.name.split('::').last.downcase
        i.instrument('rack.protection', env)
      end
    
          def call(env)
        status, headers, body = @app.call(env)
        header = options[:report_only] ? 'Content-Security-Policy-Report-Only' : 'Content-Security-Policy'
        headers[header] ||= csp_policy if html? headers
        [status, headers, body]
      end
    end
  end
end

    
          def call(env)
        status, headers, body = super
        response = Rack::Response.new(body, status, headers)
        request = Rack::Request.new(env)
        remove_bad_cookies(request, response)
        response.finish
      end