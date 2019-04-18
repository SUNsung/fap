
        
        module Gitlab
  module Ci
    module Pipeline
      # Class for preloading data associated with pipelines such as commit
      # authors.
      class Preloader
        def self.preload!(pipelines)
          ##
          # This preloads all commits at once, because `Ci::Pipeline#commit` is
          # using a lazy batch loading, what results in only one batched Gitaly
          # call.
          #
          pipelines.each(&:commit)
    
          def request_count_counter
        @request_counter ||= Gitlab::Metrics.counter(
          :github_importer_request_count,
          'The number of GitHub API calls performed when importing projects'
        )
      end
    end
  end
end

    
            def sidekiq_worker_class
          ImportIssueWorker
        end
    
            # Builds a new note using a Hash that was built from a JSON payload.
        def self.from_json_hash(raw_hash)
          hash = Representation.symbolize_hash(raw_hash)
          hash[:author] &&= Representation::User.from_json_hash(hash[:author])
    
        context 'single argument' do
      before do
        subject.instance_eval do
          env :userpaths
        end
      end
    
          it 'gives dir where zsh completions have been installed' do
        (path/'share/zsh/site-functions').mkpath
        expect(caveats).to include(HOMEBREW_PREFIX/'share/zsh/site-functions')
      end
    
      failure_message_for_should do |actual|
    'expected #{actual.inspect} to have value #{expected.inspect} but was #{actual.value.inspect}'
  end
  failure_message_for_should_not do |actual|
    'expected #{actual.inspect} to not have value #{expected.inspect} but it had'
  end
end
    
          it 'should remove participation' do
        delete :destroy, params: {post_id: post.id}
        expect(alice.participations.where(:target_id => post.id)).not_to exist
        expect(response.code).to eq('200')
      end
    end
    
          context 'resharing another user\'s reshare' do
        before do
          @root = @post
          @post = FactoryGirl.create(:reshare, :root => @root, :author => alice.person)
        end
    
        UnitOfWork = Struct.new(:queue, :job) do
      def acknowledge
        # nothing to do
      end
    
          def insert_after(oldklass, newklass, *args)
        i = entries.index { |entry| entry.klass == newklass }
        new_entry = i.nil? ? Entry.new(newklass, *args) : entries.delete_at(i)
        i = entries.index { |entry| entry.klass == oldklass } || entries.count - 1
        entries.insert(i+1, new_entry)
      end
    
          def process_job(job)
        worker = new
        worker.jid = job['jid']
        worker.bid = job['bid'] if worker.respond_to?(:bid=)
        Sidekiq::Testing.server_middleware.invoke(worker, job, job['queue']) do
          execute_job(worker, job['args'])
        end
      end
    
      # This class is raised if there's something wrong with a setting in the package.
  class InvalidArgument < StandardError; end
    
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
    
      # Helper for group lookup
  def gid2group(gid)
    begin
      grent = Etc.getgrgid(gid)
      return grent.name
    rescue ArgumentError => e
      # Invalid user id? No user? Return the uid.
      logger.warn('Failed to find group for gid #{gid}')
      return gid.to_s
    end
  end # def uid2user
end # class FPM::Target::Puppet
    
          # TODO(sissel): preinstall/postinstall
      # strip @prefix, since BASEDIR will set prefix via the pkginfo file
      IO.popen('pkgproto #{staging_path}/#{@prefix}=').each_line do |line|
        type, klass, path, mode, user, group = line.split