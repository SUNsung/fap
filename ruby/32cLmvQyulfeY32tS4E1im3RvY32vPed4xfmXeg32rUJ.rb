      def empty_cookie(host, path)
        {:value => '', :domain => host, :path => path, :expires => Time.at(0)}
      end
    
          def handle(hash)
        was = hash.dup
        hash.replace escape(hash)
        was
      end
    
        expect(get('/..', :foo => '<bar>')).to be_ok
  end