
        
              it 'does set the exclude directories' do
        result = Fastlane::FastFile.new.parse('lane :test do
            cloc(exclude_dir: 'test1,test2,build')
          end').runner.execute(:test)
    
      def test_pipeline_r
    Open3.pipeline_r([RUBY, '-e', 'print '1''],
                     [RUBY, '-e', 'print STDIN.read + '2'']) {|o,ts|
      assert_kind_of(IO, o)
      assert_kind_of(Array, ts)
      assert_equal(2, ts.length)
      ts.each {|t| assert_kind_of(Thread, t) }
      assert_equal('12', o.read)
      ts.each {|t|
        assert(t.value.success?)
      }
    }
  end
    
        it 'evaluates the first conditions lazily with exclusive-end range' do
      collector = proc { |i| ScratchPad << i }
      eval '10.times { |i| i if collector[i]..false }'
      ScratchPad.recorded.should == [0]
    end
    
        (101 % 55 % 7).should == (101 % 55) % 7
    (101 % 55 % 7).should_not == 101 % (55 % 7)
    
      describe 'RTYPEDATA' do
    it 'returns the struct data' do
      a = @s.typed_wrap_struct(1024)
      @s.typed_get_struct_rdata(a).should == 1024
    end
    
        h.instance_variable_set(:@foo, :foo)
    h.default = 42
    h.taint
    h = h.filter {true}
    assert_instance_of(Hash, h)
    assert_not_predicate(h, :tainted?)
    assert_nil(h.default)
    assert_not_send([h, :instance_variable_defined?, :@foo])
  end
    
      it 'decodes the remaining ints when passed the '*' modifier after another directive' do
    'dcbahgfe'.unpack(unpack_format()+unpack_format('*')).should == [1684234849, 1751606885]
  end
    
      it 'implicitly has a count of one when no count modifier is passed' do
    '\xc2\x80\xc2\x81\xc2\x82\xc2\x83'.unpack('U1').should == [0x80]
  end
    
        def matching_domain
      if domain.nil?
        Account.where(domain: nil)
      else
        Account.where(Account.arel_table[:domain].lower.eq domain.to_s.downcase)
      end
    end
  end
end

    
          rescue_from OpenIDConnect::HttpError do |e|
        http_error_page_as_json(e)
      end
    
          def create
        req = Rack::Request.new(request.env)
        if req['client_assertion_type'] == 'urn:ietf:params:oauth:client-assertion-type:jwt-bearer'
          handle_jwt_bearer(req)
        end
        self.status, headers, self.response_body = Api::OpenidConnect::TokenEndpoint.new.call(request.env)
        headers.each {|name, value| response.headers[name] = value }
        nil
      end
    
          # If this importer is based on files on the local filesystem This method
      # should return true if the file, when changed, should trigger a
      # recompile.
      #
      # It is acceptable for non-sass files to be watched and trigger a recompile.
      #
      # @param filename [String] The absolute filename for a file that has changed.
      # @return [Boolean] When the file changed should cause a recompile.
      def watched_file?(filename)
        false
      end
    end
  end
end
