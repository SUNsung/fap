
        
                  # Parse the options and return if we don't have any target.
          argv = parse_options(opts)
          return if !argv
    
      describe '.rsync_chown_support?' do
    let(:local_version) { '3.1.1' }
    let(:remote_version) { '3.1.1' }
    
              command = []
          command << 'sudo' if !File.writable?('/etc/exports')
          command += [
            'sed', '-E', '-e',
            '/^# VAGRANT-BEGIN:( #{user})? #{id}/,' +
            '/^# VAGRANT-END:( #{user})? #{id}/ d',
            '-ibak',
            '/etc/exports'
          ]
    
          def build_rsync_chown(opts)
        guest_path = Shellwords.escape(opts[:guestpath])
        if(opts[:exclude] && !Array(opts[:exclude]).empty?)
          exclude_base = Pathname.new(opts[:guestpath])
          exclusions = Array(opts[:exclude]).map do |ex_path|
            ex_path = ex_path.slice(1, ex_path.size) if ex_path.start_with?(File::SEPARATOR)
            '-path #{Shellwords.escape(exclude_base.join(ex_path))} -prune'
          end.join(' -o ') + ' -o '
        end
        'find #{guest_path} #{exclusions}' \
          ''!' -type l -a ' \
          ''(' ! -user #{opts[:owner]} -or ! -group #{opts[:group]} ')' -exec ' \
          'chown #{opts[:owner]}:#{opts[:group]} '{}' +'
      end
    end
  end
end

    
    describe VagrantPlugins::Chef::Cap::Linux::ChefInstalled do
  include_context 'unit'
    
          # Track the original box so we know if we changed
      box = nil
      initial_box = original_box = config.vm.box
      initial_version = original_version = config.vm.box_version
    
            env.box3('base', '1.0', :foo)
      end
    
            # Lookup the ID for the container with the given name
        #
        # @param [String] name Name of container
        # @return [String] Container ID
        def get_container_id(name)
          compose_execute('ps', '-q', name).chomp
        end
    
          def find_matching_tag(tag)
        # Used primarily by developers testing beta macOS releases.
        if OS::Mac.prerelease? && ARGV.skip_or_later_bottles?
          generic_find_matching_tag(tag)
        else
          generic_find_matching_tag(tag) ||
            find_older_compatible_tag(tag)
        end
      end
    
              find_instance_method_call(body_node, 'Formula', :factory) do
            problem '\'Formula.factory(name)\' is deprecated in favor of \'Formula[name]\''
          end
    
        it 'dependencies with invalid options in array value which lead to force rebuild' do
      expect_offense(<<~RUBY)
        class Foo < Formula
          desc 'foo'
          url 'https://brew.sh/foo-1.0.tgz'
          depends_on 'httpd' => [:build, :test]
          depends_on 'foo' => [:optional, 'with-bar']
                                           ^^^^^^^^ Dependency foo should not use option with-bar
          depends_on 'icu4c' => [:optional, 'c++11']
                                             ^^^^^ Dependency icu4c should not use option c++11
        end
      RUBY
    end
    
    require 'cask/cmd/options'
    
        def metadata_timestamped_path(version: self.version, timestamp: :latest, create: false)
      raise CaskError, 'Cannot create metadata path when timestamp is :latest.' if create && timestamp == :latest
    
      it 'does still notify when sender\'s domain is blocked but sender is followed' do
    recipient.block_domain!(sender.domain)
    recipient.follow!(sender)
    is_expected.to change(Notification, :count)
  end
    
      def refresh_poll
    ActivityPub::FetchRemotePollService.new.call(@poll, current_account) if user_signed_in? && @poll.possibly_stale?
  end
end

    
      attr_accessor :account_ids, :action, :current_account
    
      def create_report!
    @report = @source_account.reports.create!(
      target_account: @target_account,
      status_ids: @status_ids,
      comment: @comment,
      uri: @options[:uri]
    )
  end
    
    class ActivityPub::ReplyDistributionWorker
  include Sidekiq::Worker
  include Payloadable
    
    describe Settings::Preferences::OtherController do
  render_views
    
      before do
    sign_in user, scope: :user
  end
    
        # Do not perform synchronous validation for remote accounts
    return if @proof.provider_username.blank? || !@proof.account.local?
    
        def self.authenticate_with_pam(attributes = {})
      super if Devise.pam_authentication
    end
  end
end

    
      before do
    follower.follow!(old_account)
    
      subject { described_class.new }
    
      gem.required_ruby_version = '>= 2.0'
  gem.add_dependency 'airbrussh', '>= 1.0.0'
  gem.add_dependency 'i18n'
  gem.add_dependency 'rake', '>= 10.0.0'
  gem.add_dependency 'sshkit', '>= 1.9.0'
    
    Then(/^the invalid (.+) release is ignored$/) do |filename|
  test = 'ls -g #{TestApp.releases_path} | grep #{filename}'
  _, _, status = vagrant_cli_command('ssh -c #{test.shellescape}')
  expect(status).to be_success
end
    
    MESSAGE
      end
    end
  end
end

    
          # rubocop:disable Security/MarshalLoad
      def add_role(role, hosts, options={})
        options_deepcopy = Marshal.dump(options.merge(roles: role))
        Array(hosts).each { |host| add_host(host, Marshal.load(options_deepcopy)) }
      end
      # rubocop:enable Security/MarshalLoad
    
    Vagrant.configure('2') do |config|
  # All Vagrant configuration is done here. The most common configuration
  # options are documented and commented below. For a complete reference,
  # please see the online documentation at vagrantup.com.
    
        # Reference
    # http://www.debian.org/doc/manuals/maint-guide/first.en.html
    # http://wiki.debian.org/DeveloperConfiguration
    # https://github.com/jordansissel/fpm/issues/37
    if ENV.include?('DEBEMAIL') and ENV.include?('DEBFULLNAME')
      # Use DEBEMAIL and DEBFULLNAME as the default maintainer if available.
      @maintainer = '#{ENV['DEBFULLNAME']} <#{ENV['DEBEMAIL']}>'
    else
      # TODO(sissel): Maybe support using 'git config' for a default as well?
      # git config --get user.name, etc can be useful.
      #
      # Otherwise default to user@currenthost
      @maintainer = '<#{ENV['USER']}@#{Socket.gethostname}>'
    end
    
        temp_info = pkginfo_template_path
    
      def output(output_path)
    self.scripts.each do |name, path|
      case name
        when 'pre-install'
          safesystem('cp', path, './preinstall')
          File.chmod(0755, './preinstall')
        when 'post-install'
          safesystem('cp', path, './postinstall')
          File.chmod(0755, './postinstall')
        when 'pre-uninstall'
          raise FPM::InvalidPackageConfiguration.new(
            'pre-uninstall is not supported by Solaris packages'
          )
        when 'post-uninstall'
          raise FPM::InvalidPackageConfiguration.new(
            'post-uninstall is not supported by Solaris packages'
          )
      end # case name
    end # self.scripts.each