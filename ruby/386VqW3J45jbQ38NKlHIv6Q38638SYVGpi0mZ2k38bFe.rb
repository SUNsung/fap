
        
        def pr(url)
  if url.end_with?(FORWARD_SLASH)
    url
  else
    url_dir = File.dirname(url)
    url_dir.end_with?(FORWARD_SLASH) ? url_dir : '#{url_dir}/'
  end
end
    
    Jekyll::Deprecator.process(ARGV)
    
            private
    
    module Commander
  # This class override the run method with our custom stack trace handling
  # In particular we want to distinguish between user_error! and crash! (one with, one without stack trace)
  class Runner
    # Code taken from https://github.com/commander-rb/commander/blob/master/lib/commander/runner.rb#L50
    
            expect do
          Fastlane::FastFile.new.parse('lane :test do
            changelog_from_git_commits(merge_commit_filtering: 'invalid')
          end').runner.execute(:test)
        end.to raise_error(error_msg)
      end
    
        os = 'windows'
    shelljoin_testcases.each do |testcase|
      it testcase['it'] + ': ' + testcase['it_result'][os] do
        array = testcase['input']
        expect_correct_implementation_to_be_called(array, :shelljoin, os)
        joined = array.shelljoin
        expect(joined).to eq(testcase['expect'][os])
      end
    end
  end
    
    if git.modified_files.include?('snapshot/lib/assets/SnapshotHelper.swift')
  warn('You modified `SnapshotHelper.swift`, make sure to update the version number at the bottom of the file to notify users about the new helper file.')
end
    
          default_command(:create)
    
            include ::EachBatch
      end
    
              pipelines.each do |pipeline|
            self.new(pipeline).tap do |preloader|
              preloader.preload_commit_authors
              preloader.preload_pipeline_warnings
              preloader.preload_stages_warnings
            end
          end
        end
    
            def each_object_to_import
          lfs_objects = Projects::LfsPointers::LfsImportService.new(project).execute
    
            def collection_method
          :issues_comments
        end
    
            each_object_to_import do |object|
          repr = representation_class.from_api_response(object)
    
            # Builds a note from a GitHub API response.
        #
        # note - An instance of `Sawyer::Resource` containing the note details.
        def self.from_api_response(note)
          matches = note.html_url.match(NOTEABLE_TYPE_REGEX)
    
      # Register with the IAX endpoint
  def register
    self.client.send_regreq(self)
    res = wait_for( IAX_SUBTYPE_REGAUTH, IAX_SUBTYPE_REGREJ )
    return if not res
    
              # Encodes the checksum field
          #
          # @return [OpenSSL::ASN1::OctetString]
          def encode_checksum
            OpenSSL::ASN1::OctetString.new(checksum)
          end
        end
      end
    end
  end
end
    
              # Decodes the key from an OpenSSL::ASN1::ASN1Data
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [EncryptionKey]
          def decode_key(input)
            Rex::Proto::Kerberos::Model::EncryptionKey.decode(input.value[0])
          end
    
              # Encodes the value field
          #
          # @return [OpenSSL::ASN1::OctetString]
          def encode_value
            OpenSSL::ASN1::OctetString.new(value)
          end
        end
      end
    end
  end
end
    
              # Decodes a Rex::Proto::Kerberos::Model::KdcResponse from an String
          #
          # @param input [String] the input to decode from
          def decode_string(input)
            asn1 = OpenSSL::ASN1.decode(input)
    
      gem.add_development_dependency 'danger'
  gem.add_development_dependency 'mocha'
  gem.add_development_dependency 'rspec'
  gem.add_development_dependency 'rubocop', '0.48.1'
end

    
      def run_vagrant_command(command)
    stdout, stderr, status = vagrant_cli_command('ssh -c #{command.inspect}')
    return [stdout, stderr] if status.success?
    raise VagrantSSHCommandError, status
  end
end
    
          private
    
          def fetch_primary(role)
        hosts = roles_for([role])
        hosts.find(&:primary) || hosts.first
      end
    
          private
    
    # This is basically a copy of the original bundler 'bundle' shim
# with the addition of the loading of our Bundler patches that
# modify Bundler's caching behaviour.
    
          it 'list the plugin with his version' do
        result = logstash.run_command_in_path('bin/logstash-plugin list --verbose #{plugin_name}')
        expect(result).to run_successfully_and_output(/^#{plugin_name} \(\d+\.\d+.\d+\)/)
      end
    end
  end
end
