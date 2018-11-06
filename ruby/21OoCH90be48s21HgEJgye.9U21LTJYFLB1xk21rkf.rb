
        
            it 'ignores SHELL env var and always uses `sh`' do
      ENV['SHELL'] = '/bin/fakeshell'
      lambda { @object.system('echo $0') }.should output_to_fd('sh\n')
    end
  end
    
      it 'sets the tainted bit' do
    o = Object.new
    o.taint
    o.tainted?.should == true
  end
    
      it 'transfers control to the innermost catch block waiting for the same sympol' do
    one = two = three = 0
    catch :duplicate do
      catch :duplicate do
        catch :duplicate do
          one = 1
          throw :duplicate
        end
        two = 2
        throw :duplicate
      end
      three = 3
      throw :duplicate
    end
    [one, two, three].should == [1, 2, 3]
  end
    
    script_binding = binding
    
        if GitHub.api_credentials_type == :none
      puts <<~EOS
        You can create a new personal access token:
          #{GitHub::ALL_SCOPES_URL}
        #{Utils::Shell.set_variable_in_profile('HOMEBREW_GITHUB_API_TOKEN', 'your_token_here')}
    
        it 'with universal' do
      expect_offense(<<~RUBY)
        class Foo < Formula
          url 'https://example.com/foo-1.0.tgz'
          option :universal
          ^^^^^^^^^^^^^^^^^ macOS has been 64-bit only since 10.6 so universal options are deprecated.
        end
      RUBY
    end
    
        def pos=(i)
      @s.pos = str_to_byte_pos i
      i
    end