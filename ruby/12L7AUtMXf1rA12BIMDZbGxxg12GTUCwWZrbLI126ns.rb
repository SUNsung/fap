
        
            def to_json
      JSON.generate(as_json)
    end
    
        def filter_const(name)
      if name.is_a? Array
        name.map &method(:filter_const)
      else
        Docs.const_get '#{name}_filter'.camelize
      end
    end
    
        def document?
      @content =~ DOCUMENT_RGX
    end
    
        def request_options
      options = { params: self.class.params, headers: self.class.headers }
      options[:accept_encoding] = 'gzip' if self.class.force_gzip
      options
    end
    
            css('*[layout]').remove_attr('layout')
        css('*[layout-xs]').remove_attr('layout-xs')
        css('*[flex]').remove_attr('flex')
        css('*[flex-xs]').remove_attr('flex-xs')
        css('*[ng-class]').remove_attr('ng-class')
        css('*[align]').remove_attr('align')
        css('h1, h2, h3').remove_attr('class')
    
          private
    
              if formula_tap == 'homebrew-core' && (depends_on?('veclibfort') || depends_on?('lapack'))
            problem 'Formulae should use OpenBLAS as the default serial linear algebra library.'
          end
    
              def install
            system 'dep', 'ensure'
            ^^^^^^^^^^^^^^^^^^^^^^ use \'dep\', \'ensure\', \'-vendor-only\'
          end
        end
      RUBY
    end
    
      before do
    ENV['JAVA_HOME'] = nil
  end
    
        def mdfind_query(*ids)
      ids.map! { |id| 'kMDItemCFBundleIdentifier == #{id}' }.join(' || ')
    end
    
          let(:specs) { { user_agent: :fake } }
    
        private
    
      def import_aspects
    contact_groups.each do |group|
      begin
        user.aspects.create!(group.slice('name', 'chat_enabled'))
      rescue ActiveRecord::RecordInvalid => e
        logger.warn '#{self}: #{e}'
      end
    end
    set_auto_follow_back_aspect
  end
    
        context 'with duplicates' do
      let(:archive_hash) {
        {
          'user' => {
            'auto_follow_back_aspect' => 'Friends',
            'profile'                 => {
              'entity_data' => {
                'author' => 'old_id@old_pod.nowhere'
              }
            },
            'contact_groups'          => [{
              'chat_enabled' => true,
              'name'         => 'Friends'
            }],
            'followed_tags'           => [target.tag_followings.first.tag.name],
            'post_subscriptions'      => [target.participations.first.target.guid]
          }
        }
      }
    
        def recheck
      pod = Pod.find(params[:pod_id])
      pod.test_connection!
    
          rescue_from OpenSSL::SSL::SSLError do |e|
        validation_fail_as_json(e)
      end
    
        # do it!
    success = membership.destroy
    
      respond_to :html, :mobile, :json
    
    def commit_details
  { :message => 'Did something at #{Time.now}',
    :name    => 'Tom Preston-Werner',
    :email   => 'tom@github.com' }
end
    
        assert_no_match /Delete this Page/, last_response.body, ''Delete this Page' link not blocked in page template'
    assert_no_match /New/,              last_response.body, ''New' button not blocked in page template'
    assert_no_match /Upload/,           last_response.body, ''Upload' link not blocked in page template'
    assert_no_match /Rename/,           last_response.body, ''Rename' link not blocked in page template'
    assert_no_match /Edit/,             last_response.body, ''Edit' link not blocked in page template'