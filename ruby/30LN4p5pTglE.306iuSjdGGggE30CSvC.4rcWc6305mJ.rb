        expect_any_instance_of(ActivityPub::LinkedDataSignature).to receive(:verify_account!).and_return(nil)
        expect(ActivityPub::Activity).not_to receive(:factory)
    
      describe 'GET #show' do
    let!(:tag)     { Fabricate(:tag, name: 'test') }
    let!(:local)   { Fabricate(:status, tags: [tag], text: 'local #test') }
    let!(:remote)  { Fabricate(:status, tags: [tag], text: 'remote #test', account: Fabricate(:account, domain: 'remote')) }
    let!(:late)    { Fabricate(:status, tags: [tag], text: 'late #test') }
    
      def page_url(page)
    account_following_index_url(@account, page: page) unless page.nil?
  end
    
      def summary
    object.spoiler_text.presence
  end
    
        def default_tasks
      %w{install}
    end
    
        # @abstract
    #
    # Your implementation should check the existence of a cache repository on
    # the deployment target
    #
    # @return [Boolean]
    #
    def test
      raise NotImplementedError, 'Your SCM strategy module should provide a #test method'
    end
    
      %w(quiet silent verbose).each do |switch|
    it 'doesn't include --#{switch} in help' do
      expect(help_output).not_to match(/--#{switch}/)
    end
  end