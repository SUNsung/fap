
        
        desc 'Open an irb session preloaded with this library'
task :console do
  sh 'irb -rubygems -r ./lib/#{name}.rb'
end

    
            # rubocop:disable Metrics/AbcSize
        def process(args, opts)
          if !args || args.empty?
            raise Jekyll::Errors::InvalidThemeName, 'You must specify a theme name.'
          end
    
          def groupable?(element)
        element.respond_to?(:group_by)
      end
    
    module Admin
  class EmailDomainBlocksController < BaseController
    before_action :set_email_domain_block, only: [:show, :destroy]
    
      def show
    @status = status_finder.status
    render json: @status, serializer: OEmbedSerializer, width: maxwidth_or_default, height: maxheight_or_default
  end
    
      def rate_limit_reset
    (request_time + reset_period_offset).iso8601(6)
  end
    
          File.open('bower.json', 'w') do |f|
        f.puts JSON.pretty_generate(spec)
      end
    end
  end
end

    
        def log_http_get_files(files, from, cached = false)
      return if files.empty?
      s = '  #{'CACHED ' if cached}GET #{files.length} files from #{from} #{files * ' '}...'
      if cached
        puts dark green s
      else
        puts dark cyan s
      end
    end
    
      # Use a different logger for distributed setups.
  # config.logger = ActiveSupport::TaggedLogging.new(SyslogLogger.new)
    
        it 'generates a jasmine fixture', :fixture => true do
      contact = alice.contact_for(bob.person)
      aspect = alice.aspects.create(:name => 'people')
      contact.aspects << aspect
      contact.save
      get :new, params: {person_id: bob.person.id}
      save_fixture(html_for('body'), 'status_message_new')
    end
  end
end

    
        it 'returns an array of likes for a post' do
      bob.like!(@message)
      get :index, params: {post_id: @message.id}
      expect(JSON.parse(response.body).map {|h| h['id'] }).to match_array(@message.likes.map(&:id))
    end
    
    describe StreamsController, :type => :controller do
  include_context :gon
    
    # Add a script to run after install (should be in the current directory):
package.scripts[:after_install] = 'my_after_install_script.sh'
    
      # SHA-1 hashes the given data, then places it in the APK hash string format
  # then returns.
  def hash_record(data)
    
          # Capture the output, which will be JSON metadata describing this python
      # package. See fpm/lib/fpm/package/pyfpm/get_metadata.py for more
      # details.
      logger.info('fetching package metadata', :setup_cmd => setup_cmd)
    
    # Support for self extracting sh files (.sh files)
#
# This class only supports output of packages.
#
# The sh package is a single sh file with a tar payload concatenated to the end.
# The script can unpack the tarball to install it and call optional post install scripts.
class FPM::Package::Sh < FPM::Package
    
    # TODO(sissel): Add dependency checking support.
# IIRC this has to be done as a 'checkinstall' step.
class FPM::Package::Solaris < FPM::Package
    
      # Generate the proper tar flags based on the path name.
  def tar_compression_flag(path)
    case path
      when /\.tar\.bz2$/
        return '-j'
      when /\.tar\.gz$|\.tgz$/
        return '-z'
      when /\.tar\.xz$/
        return '-J'
      else
        return nil
    end
  end # def tar_compression_flag
end # class FPM::Package::Tar

    
        stdout_w.close; stderr_w.close
    logger.debug('Process is running', :pid => process.pid)
    if block_given?
      args3 = []
      args3.push(process)           if opts[:process]
      args3.push(process.io.stdin)  if opts[:stdin]
      args3.push(stdout_r)          if opts[:stdout]
      args3.push(stderr_r)          if opts[:stderr]
    
    shared_examples_for 'a project hook' do
  let(:project) { FactoryBot.build(:project) }
    
      $stdout = captured_stdout
  $stderr = captured_stderr
    
        context 'tmux is not installed' do
      before do
        allow(Kernel).to receive(:system) { false }
      end
    
          def show_version_warning
        say Tmuxinator::TmuxVersion::UNSUPPORTED_VERSION_MSG, :red
        show_continuation_prompt
      end
    
          expect(instance.render).to match %r{wemux.ls.2>\/dev\/null}
    end
  end
    
        Make sure that you've set these variables in your ENV: