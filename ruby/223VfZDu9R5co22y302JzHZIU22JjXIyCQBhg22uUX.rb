
        
                result = Fastlane::FastFile.new.parse('lane :test do
          add_git_tag ({
            tag: '#{tag}',
          })
        end').runner.execute(:test)
    
          it 'doesn't add a use-submodules flag to command if use_submodules is set to false' do
        result = Fastlane::FastFile.new.parse('lane :test do
            carthage(
              use_submodules: false
            )
          end').runner.execute(:test)
    
              expect(called).to be(true)
          expect(FastlaneCore::UI).to have_received(:error).with('Exit status of command 'exit 1' was 1 instead of 0.\n')
        end
      end
    
        describe 'shell escaping' do
      let(:keychain_name) { 'keychain with spaces.keychain' }
      let(:shell_escaped_name) { keychain_name.shellescape }
      let(:name_regex) { Regexp.new(Regexp.escape(shell_escaped_name)) }
    
          def perform(start_id, stop_id)
        update = '
          latest_merge_request_diff_id = (
            SELECT MAX(id)
            FROM merge_request_diffs
            WHERE merge_requests.id = merge_request_diffs.merge_request_id
          )'.squish
    
            def sidekiq_worker_class
          ImportDiffNoteWorker
        end
    
                rows << {
              label_id: label_id,
              target_id: target_id,
              target_type: issue.issuable_type,
              created_at: time,
              updated_at: time
            }
          end
    
          # Returns the ID to use for the cache used for checking if an object has
      # already been imported or not.
      #
      # object - The object we may want to import.
      def id_for_already_imported_cache(object)
        raise NotImplementedError
      end
    
    module Gitlab
  module GithubImport
    module Representation
      class User
        include ToHash
        include ExposeAttribute
    
            File.chmod(0, f.path)
    
      # This array contains name of parser events.
  PARSER_EVENTS = PARSER_EVENT_TABLE.keys
    
        return Gem::RemoteFetcher.fetcher.download_to_cache(dependency) unless
      selected
    
        assert_equal B(%w{ 04 06 03 }), point.to_octet_string(:uncompressed)
    assert_equal B(%w{ 03 06 }), point.to_octet_string(:compressed)
    assert_equal B(%w{ 07 06 03 }), point.to_octet_string(:hybrid)
    
          @socket.read(6).should == 'hello!'
    end
  end
    
        def humanized_literal(str)
      str
        .gsub(CLEAR, '@@@{CLEAR}')
        .gsub(BOLD, '@@@{BOLD}')
        .gsub(UNDERLINE, '@@@{UNDERLINE}')
        .gsub(REVERSE, '@@@{REVERSE}')
        .gsub(RED, '@@@{RED}')
        .gsub(GREEN, '@@@{GREEN}')
        .gsub(YELLOW, '@@@{YELLOW}')
        .gsub(BLUE, '@@@{BLUE}')
        .gsub(MAGENTA, '@@@{MAGENTA}')
        .gsub(CYAN, '@@@{CYAN}')
        .dump.gsub(/@@@/, '#')
    end
  end
end

    
      def test_undef_w_stateless
    with_tmpdir {
      generate_file('t.txt', 'a\uFFFDb')
      open('t.txt', 'w:euc-jp:utf-8', :undef => :replace) {|f|
        assert_nothing_raised { f.write 'a\uFFFDb' }
      }
      assert_equal('a?b', File.read('t.txt'))
      open('t.txt', 'w:euc-jp:utf-8', :undef => :replace, :replace => '') {|f|
        assert_nothing_raised { f.write 'a\uFFFDb' }
      }
      assert_equal('ab', File.read('t.txt'))
      open('t.txt', 'w:euc-jp:utf-8', :invalid => :replace) {|f|
        assert_raise(Encoding::UndefinedConversionError) { f.write 'a\uFFFDb' }
      }
      open('t.txt', 'w:euc-jp:utf-8', :invalid => :replace, :replace => '') {|f|
        assert_raise(Encoding::UndefinedConversionError) { f.write 'a\uFFFDb' }
      }
    }
  end
    
          module R
        refine C do
          def m
            :foo
          end
        end
      end
    
      def test_copy_stream_socket4
    with_bigsrc {|bigsrc, bigcontent|
      File.open(bigsrc) {|f|
        assert_equal(0, f.pos)
        with_socketpair {|s1, s2|
          t1 = Thread.new { s2.read }
          t2 = Thread.new {
            ret = IO.copy_stream(f, s1, nil, 100)
            assert_equal(bigcontent.bytesize-100, ret)
            assert_equal(0, f.pos)
            s1.close
          }
          result, _ = assert_join_threads([t1, t2])
          assert_equal(bigcontent[100..-1], result)
        }
      }
    }
  end if defined? UNIXSocket
    
          def warn_set_scm_is_deprecated
        $stderr.puts(<<-MESSAGE)
[Deprecation Notice] `set :scm, #{scm_name.inspect}` is deprecated.
To ensure your project is compatible with future versions of Capistrano,
remove the :scm setting and instead add these lines to your Capfile after
`require 'capistrano/deploy'`:
    
          def primary
        self if fetch(:primary)
      end
    
          # rubocop:disable Security/MarshalLoad
      def add_role(role, hosts, options={})
        options_deepcopy = Marshal.dump(options.merge(roles: role))
        Array(hosts).each { |host| add_host(host, Marshal.load(options_deepcopy)) }
      end
      # rubocop:enable Security/MarshalLoad
    
          def untrusted_keys
        keys - @trusted_keys
      end