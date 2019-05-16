    def action_completed(completion_context: nil)
    end
    
          def self.category
        :source_control
      end
    
          it 'allows you to force the tag creation' do
        tag = '2.0.0'
        message = 'message'
    
        # the value which is used if there was no given values and no environment values
    attr_accessor :default_value
    
    full_params = ARGV.shelljoin
    
    Gem::Specification.new do |gem|
  gem.name          = 'capistrano'
  gem.version       = Capistrano::VERSION
  gem.authors       = ['Tom Clements', 'Lee Hambley']
  gem.email         = ['seenmyfate@gmail.com', 'lee.hambley@gmail.com']
  gem.description   = 'Capistrano is a utility and framework for executing commands in parallel on multiple remote machines, via SSH.'
  gem.summary       = 'Capistrano - Welcome to easy deployment with Ruby over SSH'
  gem.homepage      = 'http://capistranorb.com/'
    
    Given(/^I make (\d+) deployments$/) do |count|
  step 'all linked files exists in shared path'
    
    MESSAGE
      end
    end
  end
end

    
    module Precious
  module Helpers
    
        # If --inputs was specified, read it as a file.
    if !inputs.nil?
      if !File.exists?(inputs)
        logger.fatal('File given for --inputs does not exist (#{inputs})')
        return 1
      end
    
        if(candidate_ret.length != length)
      length += 1
      candidate_ret = '#{length.to_s} #{ret}'
    end
    
        # Remove the stuff we don't want
    delete_these = ['.depdb', '.depdblock', '.filemap', '.lock', '.channel', 'cache', 'temp', 'download', '.channels', '.registry']
    Find.find(staging_path) do |path|
      if File.file?(path)
        logger.info('replacing staging_path in file', :replace_in => path, :staging_path => staging_path)
        begin
          content = File.read(path).gsub(/#{Regexp.escape(staging_path)}/, '')
          File.write(path, content)
        rescue ArgumentError => e
          logger.warn('error replacing staging_path in file', :replace_in => path, :error => e)
        end
      end
      FileUtils.rm_r(path) if delete_these.include?(File.basename(path))
    end
    
      public(:input)
end # class FPM::Package::PleaseRun

    
        begin
      safesystem('#{attributes[:python_bin]} -c 'import pkg_resources'')
    rescue FPM::Util::ProcessFailed => e
      logger.error('Your python environment is missing a working setuptools module. I tried to find the 'pkg_resources' module but failed.', :python => attributes[:python_bin], :error => e)
      raise FPM::Util::ProcessFailed, 'Python (#{attributes[:python_bin]}) is missing pkg_resources module.'
    end
    
    # Support for self extracting sh files (.sh files)
#
# This class only supports output of packages.
#
# The sh package is a single sh file with a tar payload concatenated to the end.
# The script can unpack the tarball to install it and call optional post install scripts.
class FPM::Package::Sh < FPM::Package
    
      def specfile(builddir)
    '#{builddir}/pkginfo'
  end
    
        # use dir to set stuff up properly, mainly so I don't have to reimplement
    # the chdir/prefix stuff special for tar.
    dir = convert(FPM::Package::Dir)
    if attributes[:chdir]
      dir.attributes[:chdir] = File.join(build_path, attributes[:chdir])
    else
      dir.attributes[:chdir] = build_path
    end
    
      def initialize(package_name, opts = {}, &block)
    @options = OpenStruct.new(:name => package_name.to_s)
    @source, @target = opts.values_at(:source, :target).map(&:to_s)
    @directory = File.expand_path(opts[:directory].to_s)
    
        process.io.stdout = stdout_w
    process.io.stderr = stderr_w
    
          prefix = ''
      if name.bytesize > 100 then
        parts = name.split('/', -1) # parts are never empty here
        name = parts.pop            # initially empty for names with a trailing slash ('foo/.../bar/')
        prefix = parts.join('/')    # if empty, then it's impossible to split (parts is empty too)
        while !parts.empty? && (prefix.bytesize > 155 || name.empty?)
          name = parts.pop + '/' + name
          prefix = parts.join('/')
        end