
        
            context 'GIT-SVN repository' do
      before do
        allow(Fastlane::Actions::GetBuildNumberRepositoryAction).to receive(:is_svn?).and_return(false)
        expect(Fastlane::Actions::GetBuildNumberRepositoryAction).to receive(:is_git_svn?).and_return(true)
        allow(Fastlane::Actions::GetBuildNumberRepositoryAction).to receive(:is_git?).and_return(false)
        allow(Fastlane::Actions::GetBuildNumberRepositoryAction).to receive(:is_hg?).and_return(false)
      end
    
        def insert(index, *names)
      @filters.insert assert_index(index), *filter_const(names)
    end
    
        def name=(value)
      @name = value.try :strip
    end
    
      it 'returns result of last statement in then-body if expression is true' do
    if true
      'foo'
      'bar'
      'baz'
    end.should == 'baz'
  end
    
      def test_doc_rdoc_ri
    @cmd.handle_options %w[--doc=rdoc,ri]
    
      in_temporary_working_directory(dir) {
    exec_test pathes
  }
end
    
          rescue_from JSON::JWS::VerificationFailed do |e|
        logger.info e.backtrace[0, 10].join('\n')
        handle_params_error('bad_request', e.message)
      end
    
            extend Executable
        executable :git
    
              private
    
        r0
  end
    
            #target = $LOADED_FEATURES.grep(/#{path}/).first
        #puts path
        #puts caller.map { |c| '  #{c}' }.join('\n')
        #fontsize = [10, duration * 48].max
        puts '#{duration},#{path},#{source}'
      end
      #puts caller.map { |c| ' => #{c}' }.join('\n')
    end
    
      def file_sha1(path)
    digest = Digest::SHA1.new
    fd = File.new(path, 'r')
    while true
      begin
        digest << fd.sysread(16384)
      rescue EOFError
        break
      end
    end
    return digest.hexdigest
  ensure
    fd.close if fd
  end