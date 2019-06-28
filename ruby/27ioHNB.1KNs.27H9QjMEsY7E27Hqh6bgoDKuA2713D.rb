
        
                if is_navigational_format?
          session.delete(session_key)
        else
          session[session_key]
        end
      end
    
          def initialize_from_record(record)
        @scope_name = Devise::Mapping.find_scope!(record)
        @resource   = instance_variable_set('@#{devise_mapping.name}', record)
      end
    
    module Devise
  module Models
    # Rememberable manages generating and clearing token for remembering the user
    # from a saved cookie. Rememberable also has utility methods for dealing
    # with serializing the user into the cookie and back from the cookie, trying
    # to lookup the record based on the saved information.
    # You probably wouldn't use rememberable methods directly, they are used
    # mostly internally for handling the remember token.
    #
    # == Options
    #
    # Rememberable adds the following options in devise_for:
    #
    #   * +remember_for+: the time you want the user will be remembered without
    #     asking for credentials. After this time the user will be blocked and
    #     will have to enter their credentials again. This configuration is also
    #     used to calculate the expires time for the cookie created to remember
    #     the user. By default remember_for is 2.weeks.
    #
    #   * +extend_remember_period+: if true, extends the user's remember period
    #     when remembered via cookie. False by default.
    #
    #   * +rememberable_options+: configuration options passed to the created cookie.
    #
    # == Examples
    #
    #   User.find(1).remember_me!  # regenerating the token
    #   User.find(1).forget_me!    # clearing the token
    #
    #   # generating info to put into cookies
    #   User.serialize_into_cookie(user)
    #
    #   # lookup the user based on the incoming cookie information
    #   User.serialize_from_cookie(cookie_string)
    module Rememberable
      extend ActiveSupport::Concern
    
      ##
  # Orders this source against +other+.
  #
  # If +other+ is a SpecificFile from a different gem name +nil+ is returned.
  #
  # If +other+ is a SpecificFile from the same gem name the versions are
  # compared using Gem::Version#<=>
  #
  # Otherwise Gem::Source#<=> is used.
    
        assert_equal 0x040603.to_bn, point.to_bn
    assert_equal 0x040603.to_bn, point.to_bn(:uncompressed)
    assert_equal 0x0306.to_bn, point.to_bn(:compressed)
    assert_equal 0x070603.to_bn, point.to_bn(:hybrid)
    
      def test_string_uminus
    assert_same 'foo'.freeze, -'foo'
    assert_redefine_method('String', '-@', 'assert_nil(-'foo')')
  end
    
    class B
  def self.m() end
end
    CONTENT
    
              unless complete_option_supported?
            actual = with_term { IRB::Color.colorize_code(code, complete: true) }
            assert_equal(result, actual, 'Case: colorize_code(#{code.dump}, complete: false)\nResult: #{humanized_literal(actual)}')
          end
        else
          actual = with_term { IRB::Color.colorize_code(code) }
          assert_equal(code, actual)
        end
      end
    end
    
        def call_x
      return x
    end
  end
    
      def invoke_ruby(args, stdin_data = '', capture_stdout = false, capture_stderr = false,
                  encoding: nil, timeout: 10, reprieve: 1, timeout_error: Timeout::Error,
                  stdout_filter: nil, stderr_filter: nil,
                  signal: :TERM,
                  rubybin: EnvUtil.rubybin, precommand: nil,
                  **opt)
    timeout = apply_timeout_scale(timeout)
    
      def test_open_flag_binary
    make_tempfile do |t|
      open(t.path, File::RDONLY, flags: File::BINARY) do |f|
        assert_equal true, f.binmode?
      end
      open(t.path, 'r', flags: File::BINARY) do |f|
        assert_equal true, f.binmode?
      end
      open(t.path, mode: 'r', flags: File::BINARY) do |f|
        assert_equal true, f.binmode?
      end
    end
  end if File::BINARY != 0
    
    a,b,*c = nil; test_ok([a,b,c] == [nil,nil,[]])
a,b,*c = 1; test_ok([a,b,c] == [1,nil,[]])
a,b,*c = []; test_ok([a,b,c] == [nil,nil,[]])
a,b,*c = [1]; test_ok([a,b,c] == [1,nil,[]])
a,b,*c = [nil]; test_ok([a,b,c] == [nil,nil,[]])
a,b,*c = [[]]; test_ok([a,b,c] == [[],nil,[]])
a,b,*c = [1,2]; test_ok([a,b,c] == [1,2,[]])
a,b,*c = [*[]]; test_ok([a,b,c] == [nil,nil,[]])
a,b,*c = [*[1]]; test_ok([a,b,c] == [1,nil,[]])
a,b,*c = [*[1,2]]; test_ok([a,b,c] == [1,2,[]])
    
          packet_gem.pack
    
    module RuboCop
  # Handles caching of configurations and association of inspected
  # ruby files to configurations.
  class ConfigStore
    def initialize
      # @options_config stores a config that is specified in the command line.
      # This takes precedence over configs located in any directories
      @options_config = nil
    
        def unescapePredicate(cc)
      if (isAlphaNumeric(cc));
        return true
      end
      # !
      if (cc == 33);
        return true
      end
      # '()*
      if (39 <= cc && cc <= 42);
        return true
      end
      # -.
      if (45 <= cc && cc <= 46);
        return true
      end
      # _
      if (cc == 95);
        return true
      end
      # ~
      if (cc == 126);
        return true
      end
    
        @wiki.update_page(@wiki.page('PG'), nil, nil, '다른 text', {})
    page = @wiki.page('PG')
    assert_equal '다른 text', utf8(page.raw_data)
    
    # Read command line options into `options` hash
begin
  opts.parse!
rescue OptionParser::InvalidOption
  puts 'gollum: #{$!.message}'
  puts 'gollum: try 'gollum --help' for more information'
  exit
end