
        
          gem.required_ruby_version = '>= 2.0'
  gem.add_dependency 'airbrussh', '>= 1.0.0'
  gem.add_dependency 'i18n'
  gem.add_dependency 'rake', '>= 10.0.0'
  gem.add_dependency 'sshkit', '>= 1.9.0'
    
        def run
      Rake.application = self
      super
    end
    
          def warn_third_party_scm_must_be_upgraded
        $stderr.puts(<<-MESSAGE)
[Deprecation Notice] `set :scm, #{scm_name.inspect}` is deprecated.
To ensure this custom SCM will work with future versions of Capistrano,
please upgrade it to a version that uses the new SCM plugin mechanism
documented here:
    
          def netssh_options
        @netssh_options ||= super.merge(fetch(:ssh_options) || {})
      end
    
          def trace_set(key)
        return unless fetch(:print_config_variables, false)
        puts 'Config variable set: #{key.inspect} => #{values[key].inspect}'
      end
    end
  end
end

    
    require_relative '../lib/bootstrap/environment'
    
    class LogStash::PluginManager::Unpack < LogStash::PluginManager::PackCommand
  option '--tgz', :flag, 'unpack a packaged tar.gz file', :default => !LogStash::Environment.windows?
  option '--zip', :flag, 'unpack a packaged  zip file', :default => LogStash::Environment.windows?
    
        puts('Updating #{filtered_plugins.collect(&:name).join(', ')}') unless filtered_plugins.empty?
    
          it 'returns true if the pipeline is a system pipeline' do
        expect(subject.system?).to be_truthy
      end
    end
    
    # enable logging
FPM::Util.send :module_function, :logger
FPM::Util.logger.level = :info
FPM::Util.logger.subscribe STDERR
    
        # Support mapping source=dest
    # This mapping should work the same way 'rsync -a' does
    #   Meaning 'rsync -a source dest'
    #   and 'source=dest' in fpm work the same as the above rsync
    if path =~ /.=./ && !File.exists?(chdir == '.' ? path : File.join(chdir, path))
      origin, destination = path.split('=', 2)
    
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
    
      def set_default_prefix
    attributes[:prefix] = self.class.default_prefix
    attributes[:prefix_given?] = true
  end
    
      # KNOWN ISSUE:
  # If an un-matched bracket is used in valid bash, as in
  # `echo '{'`, this function will choke.
  # However, to cover this case basically
  # requires writing almost half a bash parser,
  # and it is a very small corner case.
  # Otherwise, this approach is very robust.
  def gobble_function(cons,prod)
    level = 1
    while level > 0
      line = cons.next
      # Not the best, but pretty good
      # short of writing an *actual* sh
      # parser
      level += line.count '{'
      level -= line.count '}'
      if level > 0
        prod.push(line.rstrip())
      else
        fine = line.sub(/\s*[}]\s*$/, '')
        if !(fine =~ /^\s*$/)
          prod.push(fine.rstrip())
        end
      end
    end
  end # def gobble_function
    
    # Support for self extracting sh files (.sh files)
#
# This class only supports output of packages.
#
# The sh package is a single sh file with a tar payload concatenated to the end.
# The script can unpack the tarball to install it and call optional post install scripts.
class FPM::Package::Sh < FPM::Package
    
        if op == '~>'