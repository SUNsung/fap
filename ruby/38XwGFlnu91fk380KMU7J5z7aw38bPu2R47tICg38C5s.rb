
        
                expect(result).to eq('/usr/local/bin/cloc  --by-file --xml  --out=build/cloc.xml MyCoolApp')
      end
    
          context('when the tag exists') do
        before do
          allow(Fastlane::Actions).to receive(:sh).with('git rev-parse -q --verify refs/tags/1.2.0 || true', { log: nil }).and_return('41215512353215321')
        end
    
    begin
  require 'bundler/setup'
rescue LoadError
  $stderr.puts '[*] Metasploit requires the Bundler gem to be installed'
  $stderr.puts '    $ gem install bundler'
  exit(1)
end
    
              s[:pass] = ''
          return
        end
    
    # Sniffer class for GET URL's
class SnifferURL < BaseProtocolParser
  def register_sigs
    self.sigs = {
      :get		=> /^GET\s+([^\n]+)\s+HTTP\/\d\.\d/i,
      :webhost	=> /^HOST\:\s+([^\n\r]+)/i,
    }
  end
    
    clsJavaCompile 	= Rjb::import('javaCompile.CompileSourceInMemory')
clsCreateJar	= Rjb::import('javaCompile.CreateJarFile')
clsFile			= Rjb::import('java.io.File')
system			= Rjb::import('java.lang.System')
#clsString	= Rjb::import('java.lang.String')
    
    #certCN cannot contain commas
certCN 		= 'Metasploit Inc.'
#keytoolOpts 	= '-genkey -alias signFiles -keystore msfkeystore ' +
#		  '-storepass msfstorepass -dname \'cn=#{certCN}\' ' +
#		  '-keypass msfkeypass'
    
            # Removes the specified cache
        #
        # @param [Array<Hash>] cache_descriptors
        #        An array of caches to remove, each specified with the same
        #        hash as cache_descriptors_per_pod especially :spec_file and :slug
        #
        def remove_caches(cache_descriptors)
          cache_descriptors.each do |desc|
            UI.message('Removing spec #{desc[:spec_file]} (v#{desc[:version]})') do
              FileUtils.rm(desc[:spec_file])
            end
            UI.message('Removing cache #{desc[:slug]}') do
              FileUtils.rm_rf(desc[:slug])
            end
          end
        end
    
            It is possible to specify a list of dependencies which will be used by
        the template in the `Podfile.default` (normal targets) `Podfile.test`
        (test targets) files which should be stored in the
        `~/.cocoapods/templates` folder.
      DESC
      self.arguments = [
        CLAide::Argument.new('XCODEPROJ', :false),
      ]
    
            def print_version
          output_pipe.puts 'version: '#{Pod::VERSION}''
        end