
        
        describe ContentSecurityPolicy::Builder do
  let(:builder) { described_class.new }
    
        # Make extending these directives no-op, until core includes them in default CSP
    TO_BE_EXTENDABLE = %i[
      connect_src
      default_src
      font_src
      form_action
      frame_ancestors
      frame_src
      img_src
      manifest_src
      media_src
      prefetch_src
      style_src
    ].freeze
    
    # == Schema Information
#
# Table name: user_stats
#
#  user_id                  :integer          not null, primary key
#  topics_entered           :integer          default(0), not null
#  time_read                :integer          default(0), not null
#  days_visited             :integer          default(0), not null
#  posts_read_count         :integer          default(0), not null
#  likes_given              :integer          default(0), not null
#  likes_received           :integer          default(0), not null
#  topic_reply_count        :integer          default(0), not null
#  new_since                :datetime         not null
#  read_faq                 :datetime
#  first_post_created_at    :datetime
#  post_count               :integer          default(0), not null
#  topic_count              :integer          default(0), not null
#  bounce_score             :float            default(0.0), not null
#  reset_bounce_score_after :datetime
#  flags_agreed             :integer          default(0), not null
#  flags_disagreed          :integer          default(0), not null
#  flags_ignored            :integer          default(0), not null
#  first_unread_at          :datetime         not null
#

    
        if !custom_order.present?
      if params[:query] == 'active'
        order << 'COALESCE(users.last_seen_at, to_date('1970-01-01', 'YYYY-MM-DD')) DESC'
      else
        order << 'users.created_at DESC'
      end
    
          if @actions_requiring_special_handling.include?(action_name)
        command_return = run_action_requiring_special_handling(
          command: command,
          parameter_map: parameter_map,
          action_return_type: action_class_ref.return_type
        )
        return command_return
      end
    
          it 'handles the exclude_dirs parameter with no elements correctly' do
        result = Fastlane::FastFile.new.parse('lane :test do
          ensure_no_debug_code(text: 'pry', path: '.', exclude_dirs: [])
        end').runner.execute(:test)
        expect(result).to eq('grep -RE 'pry' '#{File.absolute_path('./')}'')
      end
    
    def expect_correct_implementation_to_be_called(obj, method, os)
  if method == :shellescape
    # String.shellescape => CrossplatformShellwords.shellescape => ...
    expect(obj).to receive(:shellescape).and_call_original
    expect(CrossplatformShellwords).to receive(:shellescape).with(obj).and_call_original
    if os == 'windows'
      # WindowsShellwords.shellescape
      expect(WindowsShellwords).to receive(:shellescape).with(obj).and_call_original
      expect(Shellwords).not_to(receive(:escape))
    else
      # Shellswords.escape
      expect(Shellwords).to receive(:escape).with(obj).and_call_original
      expect(WindowsShellwords).not_to(receive(:shellescape))
    end
  elsif method == :shelljoin
    # Array.shelljoin => CrossplatformShellwords.shelljoin => CrossplatformShellwords.shellescape ...
    expect(obj).to receive(:shelljoin).and_call_original
    expect(CrossplatformShellwords).to receive(:shelljoin).with(obj).and_call_original
    expect(CrossplatformShellwords).to receive(:shellescape).at_least(:once).and_call_original
  end
end

    
      # POST /resource/sign_in
  def create
    self.resource = warden.authenticate!(auth_options)
    set_flash_message!(:notice, :signed_in)
    sign_in(resource_name, resource)
    yield resource if block_given?
    respond_with resource, location: after_sign_in_path_for(resource)
  end
    
        def confirmation_instructions(record, token, opts={})
      @token = token
      devise_mail(record, :confirmation_instructions, opts)
    end
    
          # Sign in a user that already was authenticated. This helper is useful for logging
      # users in after sign up. All options given to sign_in is passed forward
      # to the set_user method in warden.
      # If you are using a custom warden strategy and the timeoutable module, you have to
      # set `env['devise.skip_timeout'] = true` in the request to use this method, like we do
      # in the sessions controller: https://github.com/plataformatec/devise/blob/master/app/controllers/devise/sessions_controller.rb#L7
      #
      # Examples:
      #
      #   sign_in :user, @user                      # sign_in(scope, resource)
      #   sign_in @user                             # sign_in(resource)
      #   sign_in @user, event: :authentication     # sign_in(resource, options)
      #   sign_in @user, store: false               # sign_in(resource, options)
      #
      def sign_in(resource_or_scope, *args)
        options  = args.extract_options!
        scope    = Devise::Mapping.find_scope!(resource_or_scope)
        resource = args.last || resource_or_scope
    
            if is_navigational_format?
          session.delete(session_key)
        else
          session[session_key]
        end
      end
    
    # Each time a record is set we check whether its session has already timed out
# or not, based on last request time. If so, the record is logged out and
# redirected to the sign in page. Also, each time the request comes and the
# record is set, we set the last request time inside its scoped session to
# verify timeout in the following request.
Warden::Manager.after_set_user do |record, warden, options|
  scope = options[:scope]
  env   = warden.request.env
    
            constant.required_fields(klass).each do |field|
          failed_attributes << field unless instance.respond_to?(field)
        end
      end
    
      private
    
          mandatory(@command.args.any? || @command.inputs || @command.input_type == 'empty',
                'No parameters given. You need to pass additional command ' \
                'arguments so that I know what you want to build packages ' \
                'from. For example, for '-s dir' you would pass a list of ' \
                'files and directories. For '-s gem' you would pass a one' \
                ' or more gems to package from. As a full example, this ' \
                'will make an rpm of the 'json' rubygem: ' \
                '`fpm -s gem -t rpm json`')
    end # def validate
    
      def dependencies
    bogus_regex = /[^\sA-Za-z0-9><=+._@-]/
    # Actually modifies depencies if they are not right
    bogus_dependencies = @dependencies.grep bogus_regex
    if bogus_dependencies.any?
      @dependencies.reject! { |a| a =~ bogus_regex }
      logger.warn('Some of the dependencies looked like they weren't package ' \
                  'names. Such dependency entries only serve to confuse arch. ' \
                  'I am removing them.',
                  :removed_dependencies => bogus_dependencies,
                  :fixed_dependencies => @dependencies)
    end
    return @dependencies
  end
    
      private
  def input(command)
    platforms = [
      ::PleaseRun::Platform::Systemd.new('default'), # RHEL 7, Fedora 19+, Debian 8, Ubuntu 16.04
      ::PleaseRun::Platform::Upstart.new('1.5'), # Recent Ubuntus
      ::PleaseRun::Platform::Upstart.new('0.6.5'), # CentOS 6
      ::PleaseRun::Platform::Launchd.new('10.9'), # OS X
      ::PleaseRun::Platform::SYSV.new('lsb-3.1') # Ancient stuff
    ]
    pleaserun_attributes = [ 'chdir', 'user', 'group', 'umask', 'chroot', 'nice', 'limit_coredump',
                             'limit_cputime', 'limit_data', 'limit_file_size', 'limit_locked_memory',
                             'limit_open_files', 'limit_user_processes', 'limit_physical_memory', 'limit_stack_size',
                             'log_directory', 'log_file_stderr', 'log_file_stdout']