
        
                private
    
        def sha256(value)
      salt = Settings.attr_encrypted_db_key_base_truncated
      ::Digest::SHA256.base64digest('#{value}#{salt}')
    end
    
      describe '#can_resend_invite?' do
    context 'when group_member is invited' do
      before do
        expect(group_member).to receive(:invite?).and_return(true)
      end
    
            it { expect(presenter.can_resend_invite?).to eq(false) }
      end
    end
  end
    
            a_split.each_with_index { |s, i| a_split[i] = s.to_i unless i == a_length - 1 }
        b_split.each_with_index { |s, i| b_split[i] = s.to_i unless i == b_length - 1 }
    
        def push(*names)
      @filters.push *filter_const(names)
    end
    
                  ssh_info = opts[:machine].ssh_info
              begin
                start = Time.now
                RsyncHelper.rsync_single(opts[:machine], ssh_info, opts[:opts])
                finish = Time.now
                @logger.info('Time spent in rsync: #{finish-start} (in seconds)')
              rescue Vagrant::Errors::MachineGuestNotReady
                # Error communicating to the machine, probably a reload or
                # halt is happening. Just notify the user but don't fail out.
                opts[:machine].ui.error(I18n.t(
                  'vagrant.rsync_communicator_not_ready_callback'))
              rescue Vagrant::Errors::RSyncPostCommandError => e
                # Error executing rsync chown command
                opts[:machine].ui.error(I18n.t(
                  'vagrant.rsync_auto_post_command_error', message: e.to_s))
              rescue Vagrant::Errors::RSyncError => e
                # Error executing rsync, so show an error
                opts[:machine].ui.error(I18n.t(
                  'vagrant.rsync_auto_rsync_error', message: e.to_s))
              end
            end
          end
        end
      end
    end
  end
end

    
      let(:helper_class) { VagrantPlugins::SyncedFolderRSync::RsyncHelper }
    
              user = Process.uid
    
          expect(a).to_not eq(b)
    end
    
            class ChefError < Vagrant::Errors::VagrantError
          error_namespace('vagrant.provisioners.chef')
        end
    
        provider_cls
  end
    
                it 'overrides download options from machine with options from CLI' do
              expect(box).to receive(:has_update?).
                with(machine.config.vm.box_version,
                     {download_options:
                       {ca_cert: 'foo', ca_path: 'bar', client_cert: 'baz',
                        insecure: true}}).
                and_return([md, md.version('1.1'),
                            md.version('1.1').provider('virtualbox')])
    
        User.find(session[:otp_user_id]) if session[:otp_user_id]
  end
    
        if run? && ARGV.any?
      require 'optparse'
      OptionParser.new { |op|
        op.on('-p port',   'set the port (default is 4567)')                { |val| set :port, Integer(val) }
        op.on('-o addr',   'set the host (default is #{bind})')             { |val| set :bind, val }
        op.on('-e env',    'set the environment (default is development)')  { |val| set :environment, val.to_sym }
        op.on('-s server', 'specify rack server/handler (default is thin)') { |val| set :server, val }
        op.on('-q',        'turn on quiet mode (default is off)')           {       set :quiet, true }
        op.on('-x',        'turn on the mutex lock (default is off)')       {       set :lock, true }
      }.parse!(ARGV.dup)
    end
  end
    
      # insert data
  fields.each do |field, values|
    updated = '  s.#{field} = ['
    updated << values.map { |v| '\n    %p' % v }.join(',')
    updated << '\n  ]'
    content.sub!(/  s\.#{field} = \[\n(    .*\n)*  \]/, updated)
  end
    
          def self.random_token
        SecureRandom.base64(TOKEN_LENGTH)
      end
    
    def with_logging(lvl=Logger::DEBUG)
  old = Sidekiq.logger.level
  begin
    Sidekiq.logger.level = lvl
    yield
  ensure
    Sidekiq.logger.level = old
  end
end

    
        it 'can be memoized' do
      q = Sidekiq::Queue.new('bar')
      assert_equal 0, q.size
      set = SetWorker.set(queue: :bar, foo: 'qaaz')
      set.perform_async(1)
      set.perform_async(1)
      set.perform_async(1)
      set.perform_async(1)
      assert_equal 4, q.size
      assert_equal 4, q.map{|j| j['jid'] }.uniq.size
      set.perform_in(10, 1)
    end
    
    describe 'Actors' do
  class JoeWorker
    include Sidekiq::Worker
    def perform(slp)
      raise 'boom' if slp == 'boom'
      sleep(slp) if slp > 0
      $count += 1
    end
  end
    
      it 'should remove dead jobs older than Sidekiq::DeadSet.timeout' do
    Sidekiq::DeadSet.stub(:timeout, 10) do
      Time.stub(:now, Time.now - 11) do
        dead_set.kill(Sidekiq.dump_json(jid: '000103', class: 'MyWorker3', args: [])) # the oldest
      end
    
      def new_manager(opts)
    Sidekiq::Manager.new(opts)
  end
    
      it 'execute only jobs with assigned JID' do
    4.times do |i|
      jid = SpecificJidWorker.perform_async(nil)
      if i % 2 == 0
        SpecificJidWorker.jobs[-1]['args'] = ['wrong_jid']
      else
        SpecificJidWorker.jobs[-1]['args'] = [jid]
      end
    end
    
        before do
      Sidekiq::Extensions.enable_delay!
    end
    
    Sidekiq::Extensions.enable_delay!

    
    $redis = Redis.new
    
      context 'given a distribution without a META.* file' do
    it 'should package IPC::Session' do
      pending('Disabled on travis-ci because it always fails, and there is no way to debug it?') if is_travis
    
        it 'should not cause errors when reading rpm with triggers in input (#802)' do
      @generator.attributes[:rpm_trigger_before_install] = [['test','#!/bin/sh\necho before_install trigger executed\n']]
      @generator.attributes[:rpm_trigger_after_install] = [['test','#!/bin/sh\necho after_install trigger executed\n']]
      @generator.attributes[:rpm_trigger_before_uninstall] = [['test','#!/bin/sh\necho before_uninstall trigger executed\n']]
      @generator.attributes[:rpm_trigger_after_target_uninstall] = [['test','#!/bin/sh\necho after_target_uninstall trigger executed\n']]
    
    package = FPM::Package::Dir.new
    
    require 'pleaserun/cli'
    
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
    
    # Support for self extracting sh files (.sh files)
#
# This class only supports output of packages.
#
# The sh package is a single sh file with a tar payload concatenated to the end.
# The script can unpack the tarball to install it and call optional post install scripts.
class FPM::Package::Sh < FPM::Package