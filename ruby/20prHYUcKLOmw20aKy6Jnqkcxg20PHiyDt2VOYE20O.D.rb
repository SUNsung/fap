
        
        require 'abstract_unit'
    
    class RedirectTest < ActionController::TestCase
  tests RedirectController
    
              # Returns name of the database.
          def database_from_path
            if @adapter == 'sqlite3'
              # 'sqlite3:/foo' is absolute, because that makes sense. The
              # corresponding relative version, 'sqlite3:foo', is handled
              # elsewhere, as an 'opaque'.
    
        test 'head :switching_protocols (101) does not return a content-type header' do
      headers = HeadController.action(:switching_protocols).call(Rack::MockRequest.env_for('/')).second
      assert_nil headers['Content-Type']
      assert_nil headers['Content-Length']
    end
    
        # Returns +text+ wrapped at +len+ columns and indented +indent+ spaces.
    # By default column length +len+ equals 72 characters and indent
    # +indent+ equal two spaces.
    #
    #   my_text = 'Here is a sample text with more than 40 characters'
    #
    #   format_paragraph(my_text, 25, 4)
    #   # => '    Here is a sample text with\n    more than 40 characters'
    def format_paragraph(text, len = 72, indent = 2)
      sentences = [[]]
    
            def application_mailer_file_name
          @_application_mailer_file_name ||= if mountable_engine?
            'app/mailers/#{namespaced_path}/application_mailer.rb'
          else
            'app/mailers/application_mailer.rb'
          end
        end
    end
  end
end

    
    end

    
        def execute(args)
    
      def revoke_moderation!
    set_permission('moderator', false)
  end
    
    describe :string_unpack_16bit_le_unsigned, shared: true do
  it 'decodes a short with most significant bit set as a positive number' do
    '\x00\xff'.unpack(unpack_format()).should == [65280]
  end
end
    
      # This case occurred in JRuby where native threads are used to provide
  # the same behavior as MRI green threads. Key to this issue was the fact
  # that the thread which called #exit in its block was also being explicitly
  # sent #join from outside the thread. The 100.times provides a certain
  # probability that the deadlock will occur. It was sufficient to reliably
  # reproduce the deadlock in JRuby.
  it 'does not deadlock when called from within the thread while being joined from without' do
    100.times do
      t = Thread.new { Thread.stop; Thread.current.send(@method) }
      Thread.pass while t.status and t.status != 'sleep'
      t.wakeup.should == t
      t.join.should == t
    end
  end
end

    
        exit_loop = true