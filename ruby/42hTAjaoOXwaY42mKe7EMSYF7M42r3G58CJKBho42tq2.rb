        key.revoke!
      end
    end
  end
end

    
          it 'it increments all targets minor version number' do
        Fastlane::FastFile.new.parse('lane :test do
          increment_version_number(bump_type: 'minor')
        end').runner.execute(:test)
    
        find_union(segments, Group).order_id_desc
  end
    
        registration
  end
    
          def merge!(other)
        other.each do |key, value|
          self[convert_key(key)] = value
        end
        self
      end
    
    namespace :db do
  namespace :migrate do
    desc 'Setup the db or migrate depending on state of db'
    task setup: :environment do
      begin
        if ActiveRecord::Migrator.current_version.zero?
          Rake::Task['db:migrate'].invoke
          Rake::Task['db:seed'].invoke
        end
      rescue ActiveRecord::NoDatabaseError
        Rake::Task['db:setup'].invoke
      else
        Rake::Task['db:migrate'].invoke
      end
    end
  end
    
        it 'removes the remote accounts\'s statuses and media attachments' do
      expect { bad_status1.reload }.to raise_exception ActiveRecord::RecordNotFound
      expect { bad_status2.reload }.to raise_exception ActiveRecord::RecordNotFound
      expect { bad_attachment.reload }.to raise_exception ActiveRecord::RecordNotFound
    end
  end
    
        # Returns whether `string` is a valid IP address or IP address range.
    #
    # @return [true] if valid IP address or IP address range.
    # @return [false] otherwise.
    def valid_ip_or_range?(string)
      range = Rex::Socket::RangeWalker.new(string)
      range && range.ranges && range.ranges.any?
    end
    
        if extension_pathname.readable?
      ENV['BUNDLE_GEMFILE'] = extension_pathname.to_path
      break
    end
  end
end
    
    def usage
  $stderr.puts '#{$0} [site list] [output-dir]'
  exit(0)
end
    
    #
# This script extracts the forms from the main page of each
# web site in a list. The output of this can be used with
# Metasploit (and other tools) to obtain the saved form data
# of these domains.
#
    
    # This is a completely hackish way to do this, and could break with future
# versions of the JDK.  Need to find a better way to use sun.security.tools.KeyTool
# and .JarSigner than modifying the source.  These rely on internal APIs that may
# change.
signer = Rjb::import('javaCompile.SignJar')
#clsKeyTool = Rjb::import('sun.security.tools.KeyTool')
#clsKeyTool = Rjb::import('sun.security.tools.KeyToolMSF')
#clsJarSigner = Rjb::import('javaCompile.SignJar.JarSignerMSF')
#clsJarSigner = Rjb::import('sun.security.tools.JarSigner')
#clsJarSigner = Rjb::import('sun.security.tools.JarSignerMSF')
    
    STDOUT.sync = true if ENV['CP_STDOUT_SYNC'] == 'TRUE'
    
            def self.options
          [[
            '--all', 'Remove all the cached pods without asking'
          ]].concat(super)
        end
    
          def executable_path
        <<-EOS
### Installation Source
    
            sets = config.sources_manager.aggregate.all_sets
        sets.each { |set| UI.pod(set, :name_and_version) }
        UI.puts '\n#{sets.count} pods were found'
      end