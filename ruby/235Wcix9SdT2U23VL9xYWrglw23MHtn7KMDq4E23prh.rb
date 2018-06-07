
        
                  if options.fetch('skip_initial_build', false)
            Jekyll.logger.warn 'Build Warning:', 'Skipping the initial build.' \
                               ' This may result in an out-of-date site.'
          else
            build(site, options)
          end
    
            # Add SSL to the stack if the user triggers --enable-ssl and they
        # provide both types of certificates commonly needed.  Raise if they
        # forget to add one of the certificates.
        def enable_ssl(opts)
          cert, key, src =
            opts[:JekyllOptions].values_at('ssl_cert', 'ssl_key', 'source')
    
          begin
        self.content = File.read(@path || site.in_source_dir(base, name),
                                 Utils.merged_file_read_opts(site, opts))
        if content =~ Document::YAML_FRONT_MATTER_REGEXP
          self.content = $POSTMATCH
          self.data = SafeYAML.load(Regexp.last_match(1))
        end
      rescue Psych::SyntaxError => e
        Jekyll.logger.warn 'YAML Exception reading #{filename}: #{e.message}'
        raise e if site.config['strict_front_matter']
      rescue StandardError => e
        Jekyll.logger.warn 'Error reading file #{filename}: #{e.message}'
        raise e if site.config['strict_front_matter']
      end
    
              # Repackage the box
          output_name = @env.vagrantfile.config.package.name || 'package.box'
          output_path = Pathname.new(File.expand_path(output_name, FileUtils.pwd))
          box.repackage(output_path)
    
            # Get the proper capability host to check
        cap_host = nil
        if type == :host
          cap_host = @env.host
        else
          with_target_vms([]) do |vm|
            cap_host = case type
                       when :provider
                         vm.provider
                       when :guest
                         vm.guest
                       else
                         raise Vagrant::Errors::CLIInvalidUsage,
                           help: opts.help.chomp
                       end
          end
        end
    
    def report_apps
  running = Set.new
  @app_names.zip(@bundle_ids, @unix_ids).each do |app_name, bundle_id, _unix_id|
    next if excluded_bundle_id bundle_id
    next if excluded_app_name app_name
    bundle_id.gsub!(%r{^(missing value)$}, '<\1>')
    running.add '#{bundle_id}\t#{app_name}'
  end
    
          def to_s
        @pairs.inspect
      end
    end
  end
end

    
          if path.extname == '.la'
        path.unlink
      elsif path.basename.to_s == 'perllocal.pod'
        # Both this file & the .packlist one below are completely unnecessary
        # to package & causes pointless conflict with other formulae. They are
        # removed by Debian, Arch & MacPorts amongst other packagers as well.
        # The files are created as part of installing any Perl module.
        path.unlink
      elsif path.basename.to_s == '.packlist' # Hidden file, not file extension!
        path.unlink
      else
        # Set permissions for executables and non-executables
        perms = if executable_path?(path)
          0555
        else
          0444
        end
        if ARGV.debug?
          old_perms = path.stat.mode & 0777
          if perms != old_perms
            puts 'Fixing #{path} permissions from #{old_perms.to_s(8)} to #{perms.to_s(8)}'
          end
        end
        path.chmod perms
      end
    end
  end
end
    
    class HeadSoftwareSpec < SoftwareSpec
  def initialize
    super
    @resource.version = Version.create('HEAD')
  end
    
    module Sinatra
  class Application < Base
    
          def initialize(*)
        super
    
        it 'copes with nested arrays' do
      mock_app do |env|
        request = Rack::Request.new(env)
        [200, {'Content-Type' => 'text/plain'}, [request.params['foo']['bar']]]
      end
      get '/', :foo => {:bar => '<bar>'}
      expect(body).to eq('&lt;bar&gt;')
    end
    
      it 'should set the X-Frame-Options' do
    expect(get('/', {}, 'wants' => 'text/html').headers['X-Frame-Options']).to eq('SAMEORIGIN')
  end
    
        expect_any_instance_of(detector).to receive(:call).with(
      hash_including('foo.bar' => 42)
    ).and_call_original
    
    module LogStash
  module Api
    module Commands
      module System
        class Plugins < Commands::Base
          def run
            { :total => plugins.count, :plugins => plugins }
          end
    
      def file_fetch(url, sha1, target)
    filename = File.basename( URI(url).path )
    output = '#{target}/#{filename}'
    begin
      actual_sha1 = file_sha1(output)
      if actual_sha1 != sha1
        fetch(url, sha1, output)
      end
    rescue Errno::ENOENT
      fetch(url, sha1, output)
    end
    return output
  end