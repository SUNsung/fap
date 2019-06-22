
        
              expect(builder.build).to eq(previous)
    end
  end
    
          policy.build
    end
    
        SCRIPT_ASSET_DIRECTORIES = [
      # [dir, can_use_s3_cdn, can_use_cdn]
      ['/assets/',             true, true],
      ['/brotli_asset/',       true, true],
      ['/extra-locales/',      false, false],
      ['/highlight-js/',       false, true],
      ['/javascripts/',        false, true],
      ['/plugins/',            false, true],
      ['/theme-javascripts/',  false, true],
      ['/svg-sprite/',         false, true],
    ]
    
      def self.bundle(langs)
    result = File.read(HIGHLIGHTJS_DIR + 'highlight.min.js')
    langs.each do |lang|
      begin
        result << '\n' << File.read(HIGHLIGHTJS_DIR + 'languages/#{lang}.min.js')
      rescue Errno::ENOENT
        # no file, don't care
      end
    end
    
      def build(theme_ids)
    builder = Builder.new
    
      def parse(csp_string)
    csp_string.split(';').map do |policy|
      directive, *sources = policy.split
      [directive, sources]
    end.to_h
  end
    
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

    
            MethodProfiler.start(transfer_timings)
        begin
          Thread.current[Logster::Logger::LOGSTER_ENV] = env
          # do this first to confirm we have a working connection
          # before doing any work
          io.write 'HTTP/1.1 '
    
        def run(action_named: nil, action_class_ref: nil, parameter_map: nil)
      action_return = runner.execute_action(action_named, action_class_ref, [parameter_map], custom_dir: '.')
      return action_return
    end
    
            expect(result).to eq('appledoc --project-name \'Project Name\' --project-company \'Company\' --docset-install-path \'docs/install/path\' --exit-threshold \'2\' input/dir')
      end
    
      end
    
            it 'adds errors when updated agents are invalid' do
          scenario_import.merges = {
            '0' => {
              'name' => '',
              'schedule' => 'foo',
              'keep_events_for' => 2.days.to_i.to_s,
              'options' => weather_agent_options.merge('api_key' => '').to_json
            }
          }
    
      def guid_order(agent_list, agent_name)
    agent_list.map{|a|a.guid}.sort.find_index(agents(agent_name).guid)
  end
end

    
        @agent1 = Agents::SchedulerAgent.new(name: 'Scheduler 1', options: { action: 'run', schedule: '*/1 * * * * *' }).tap { |a|
      a.user = users(:bob)
      a.save!
    }
    @agent2 = Agents::SchedulerAgent.new(name: 'Scheduler 2', options: { action: 'run', schedule: '*/1 * * * * *' }).tap { |a|
      a.user = users(:bob)
      a.save!
    }
  end
    
      describe '#working?' do
    it 'it is working when at least one event was emitted' do
      expect(@checker).not_to be_working
      @checker.memory[:last_event] = '2014-04-17T10:25:31.000+02:00'
      @checker.check
      expect(@checker.reload).to be_working
    end
  end
end

    
        it 'should raise error when invalid response arrives' do
      stub(HTTParty).post { {'blah' => 'blah'} }
      expect { @checker.send_notification({}) }.to raise_error(StandardError, /Invalid response from Boxcar:/)
    end
    
          def versions
        i = @versions.size + 1
        @versions.map do |v|
          i -= 1
          { :id        => v.id,
            :id7       => v.id[0..6],
            :num       => i,
            :author    => v.author.name.respond_to?(:force_encoding) ? v.author.name.force_encoding('UTF-8') : v.author.name,
            :message   => v.message.respond_to?(:force_encoding) ? v.message.force_encoding('UTF-8') : v.message,
            :date      => v.authored_date.strftime('%B %d, %Y'),
            :gravatar  => Digest::MD5.hexdigest(v.author.email.strip.downcase),
            :identicon => self._identicon_code(v.author.email),
            :date_full => v.authored_date,
            :files     => v.stats.files.map { |f,*rest|
              page_path = extract_renamed_path_destination(f)
              page_path = remove_page_extentions(page_path)
              { :file => f,
                :link => '#{page_path}/#{v.id}'
              }
            }
          }
        end
      end
    
    context 'Precious::Views::Page' do
  setup do
    examples = testpath 'examples'
    @path    = File.join(examples, 'test.git')
    FileUtils.cp_r File.join(examples, 'empty.git'), @path, :remove_destination => true
    @wiki = Gollum::Wiki.new(@path)
  end
    
        def not_found(msg = nil)
      @message = msg || 'The requested page does not exist.'
      status 404
      return mustache :error
    end
    
      def permitted_attributes_for_preview
    %i[body_markdown]
  end
    
    # This example uses the API to create a package from local files
# it also creates necessary init-scripts and systemd files so our executable can be used as a service
    
        flags = []
    args = []
    while rc_args.size > 0 do
      arg = rc_args.shift
      opt = self.class.find_option(arg)
      if opt and not opt.flag?
        flags.push(arg)
        flags.push(rc_args.shift)
      elsif opt or arg[0] == '-'
        flags.push(arg)
      else
        args.push(arg)
      end
    end
    
      def add_path(tar, tar_path, path)
    stat = File.lstat(path)
    if stat.directory?
      tar.mkdir(tar_path, stat.mode)
    elsif stat.symlink?
      tar.add_symlink(tar_path, File.readlink(path), stat.mode)
    else
      tar.add_file_simple(tar_path, stat.mode, stat.size) do |io|
        File.open(path) do |fd|
          chunk = nil
          size = 0
          while chunk = fd.read(16384) do
            size += io.write(chunk)
          end
          if size != stat.size
            raise 'Failed to add #{path} to the archive; expected to ' +
                  'write #{stat.size} bytes, only wrote #{size}'
          end
        end
      end # tar.tar.add_file_simple
    end
  end # def add_path
    
        npm_flags = []
    settings.each do |key, value|
      # npm lets you specify settings in a .npmrc but the same key=value settings
      # are valid as '--key value' command arguments to npm. Woo!
      logger.debug('Configuring npm', key => value)
      npm_flags += [ '--#{key}', value ]
    end
    
      def parse_install_script(path)
    global_lines = []
    look_for = Set.new(['pre_install', 'post_install',
                        'pre_upgrade', 'post_upgrade',
                        'pre_remove', 'post_remove'])
    functions = {}
    look_for.each do |fname|
      functions[fname] = []
    end
    
        pear_cmd = 'pear -c #{config} remote-info #{input_package}'
    logger.info('Fetching package information', :package => input_package, :command => pear_cmd)
    name = %x{#{pear_cmd} | sed -ne '/^Package\s*/s/^Package\s*//p'}.chomp
    self.name = '#{attributes[:pear_package_name_prefix]}-#{name}'
    self.version = %x{#{pear_cmd} | sed -ne '/^Installed\s*/s/^Installed\s*//p'}.chomp
    self.description  = %x{#{pear_cmd} | sed -ne '/^Summary\s*/s/^Summary\s*//p'}.chomp
    logger.debug('Package info', :name => self.name, :version => self.version,
                  :description => self.description)
    
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
    
      # Helper for user lookup
  def uid2user(uid)
    begin
      pwent = Etc.getpwuid(uid)
      return pwent.name
    rescue ArgumentError => e
      # Invalid user id? No user? Return the uid.
      logger.warn('Failed to find username for uid #{uid}')
      return uid.to_s
    end
  end # def uid2user
    
    # Use a tarball as a package.
#
# This provides no metadata. Both input and output are supported.
class FPM::Package::Tar < FPM::Package
    
        cleanup_staging
    # Tell 'dir' to input '.' and chdir/prefix will help it figure out the
    # rest.
    dir.input('.')
    @staging_path = dir.staging_path
    dir.cleanup_build
  end # def input
    
        if !program.include?('/') and !program_in_path?(program)
      raise ExecutableNotFound.new(program)
    end
    
    module FPM
  module Issues
    module TarWriter
      # See https://github.com/rubygems/rubygems/issues/1608
      def self.has_issue_1608?
        name, prefix = nil,nil
        io = StringIO.new
        ::Gem::Package::TarWriter.new(io) do |tw|
          name, prefix = tw.split_name('/123456789'*9 + '/1234567890') # abs name 101 chars long
        end
        return prefix.empty?
      end
    
        def tmux_window_and_pane_target
      '#{project.name}:#{window_index}.#{pane_index}'
    end
    
      it 'creates an instance' do
    expect(subject).to be_a(Tmuxinator::Pane)
  end
    
        context 'custom name' do
      it 'renders the tmux config with custom name' do
        rendered = project_with_custom_name.render
        expect(rendered).to_not be_empty
        expect(rendered).to include('custom')
        expect(rendered).to_not include('sample')
      end
    end
    
    describe Tmuxinator::Doctor do
  describe '.installed?' do
    context 'tmux is installed' do
      before do
        allow(Kernel).to receive(:system) { true }
      end
    
        it 'deletes the configuration directory(s)' do
      allow(Tmuxinator::Config).to receive(:directories) \
        { [Tmuxinator::Config.xdg, Tmuxinator::Config.home] }
      expect(FileUtils).to receive(:remove_dir).once.
        with(Tmuxinator::Config.xdg)
      expect(FileUtils).to receive(:remove_dir).once.
        with(Tmuxinator::Config.home)
      expect(FileUtils).to receive(:remove_dir).never
      capture_io { cli.start }
    end