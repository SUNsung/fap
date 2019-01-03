
        
        # Test if processing content string without any Liquid constructs, via Liquid,
# is slower than checking whether constructs exist ( using `String#include?` )
# and return-ing the 'plaintext' content string as is..
#
# Ref: https://github.com/jekyll/jekyll/pull/6735
    
    def envygeeks(url)
  return url if url.end_with?(FORWARD_SLASH) || url == FORWARD_SLASH
    
    require 'http/parser'
    
        system_command '#{staged_path}/AdobePatchInstaller.app/Contents/MacOS/AdobePatchInstaller',
                   args: [
                           '--mode=silent',
                         ],
                   sudo: true
  end
    
    require_relative '../lib/bootstrap/environment'
    
    # when launched as a script, not require'd, (currently from bin/logstash and bin/logstash-plugin) the first
# argument is the path of a Ruby file to require and a LogStash::Runner class is expected to be
# defined and exposing the LogStash::Runner#main instance method which will be called with the current ARGV
# currently lib/logstash/runner.rb and lib/pluginmanager/main.rb are called using this.
if $0 == __FILE__
  LogStash::Bundler.setup!({:without => [:build, :development]})
  require_relative 'patches/jar_dependencies'
    
    module LogStash
  module PluginManager
  end
end
    
            if Utils::HttpClient.remote_file_exist?(uri)
          PluginManager.ui.debug('Found package at: #{uri}')
          return LogStash::PluginManager::PackInstaller::Remote.new(uri)
        else
          PluginManager.ui.debug('Package not found at: #{uri}')
          return nil
        end
      rescue SocketError, Errno::ECONNREFUSED, Errno::EHOSTUNREACH => e
        # This probably means there is a firewall in place of the proxy is not correctly configured.
        # So lets skip this strategy but log a meaningful errors.
        PluginManager.ui.debug('Network error, skipping Elastic pack, exception: #{e}')
    
          it 'display a list of installed plugins' do
        result = logstash.run_command_in_path('bin/logstash-plugin list --installed')
        expect(result.stdout.split('\n').size).to be > 1
      end
    
          def remove_page_extentions(page_path)
        Gollum::Markup.formats.values.each do |format|
          page_path = page_path.gsub(/\.#{format[:regexp]}$/, '')
        end
        return page_path
      end
    
        assert_match /Edit Page/,             last_response.body, ''Edit Page' link is blocked in compare template'
    assert_match /Revert Changes/,        last_response.body, ''Revert Changes' link is blocked in compare template'
  end
    
      test 'clean path without leading slash' do
    assert_equal '/Mordor', clean_path('Mordor')
  end
    
        # Remove all slashes from the start of string.
    # Remove all double slashes
    def clean_url url
      return url if url.nil?
      url.gsub('%2F', '/').gsub(/^\/+/, '').gsub('//', '/')
    end
    
      s.test_files = s.files.select { |path| path =~ /^test\/test_.*\.rb/ }
end

    
          private
    
          def disabled?
        self.__test_mode == :disable
      end