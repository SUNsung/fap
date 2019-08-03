
        
                expect(FileStore::BaseStore.new.get_path_for_upload(upload))
          .to eq('original/2X/4/4170ac2a2782a1516fe9e13d7322ae482c1bd594.png')
      end
    end
    
        result = result.where('topics.deleted_at IS NULL') if require_deleted_clause
    result = result.where('topics.posts_count <= ?', options[:max_posts]) if options[:max_posts].present?
    result = result.where('topics.posts_count >= ?', options[:min_posts]) if options[:min_posts].present?
    
            # no optimisation possible without losing details
        expect(upload.filesize).to eq(9558)
    
      def staff_available_actions
    UserHistory.staff_actions.sort.map do |name|
      {
        id: name,
        action_id: UserHistory.actions[name] || UserHistory.actions[:custom_staff],
      }
    end
  end
end

    
    
# Documentation comments:
#  - All documentation comes from Nutshell.
#  - MonitorMixin.new_cond appears in the example, but is not documented in
#    Nutshell.
#  - All the internals (internal modules Accessible and Initializable, class
#    ConditionVariable) appear in RDoc.  It might be good to hide them, by
#    making them private, or marking them :nodoc:, etc.
#  - RDoc doesn't recognise aliases, so we have mon_synchronize documented, but
#    not synchronize.
#  - mon_owner is in Nutshell, but appears as an accessor in a separate module
#    here, so is hard/impossible to RDoc.  Some other useful accessors
#    (mon_count and some queue stuff) are also in this module, and don't appear
#    directly in the RDoc output.
#  - in short, it may be worth changing the code layout in this file to make the
#    documentation easier

    
        assert @co.document_children
    
        comment = doc(para('this is a comment'))
    
    end

    
        assert_equal expected, doc
  end
    
        out = m.convert doc, tt
    
      def test_file_equals
    @d.file = 'file.rb'
    
          spec['main'] =
          find_files.(File.join(Bootstrap.stylesheets_path, '_bootstrap.scss')) +
          find_files.(Bootstrap.fonts_path) +
          %w(assets/javascripts/bootstrap.js)
    
      # Prepend all log lines with the following tags.
  # config.log_tags = [ :subdomain, :uuid ]
    
        it 'returns a flare tag if there is a flare tag in the list' do
      valid_article = create(:article, tags: 'ama')
      expect(described_class.new(valid_article).tag.name).to eq('ama')
    end
    
          it 'renders articles of long length without breaking' do
        # This is a pretty weak test, just to exercise different lengths with no breakage
        article.update(title: (0...75).map { rand(65..90).chr }.join)
        get article.path
        article.update(title: (0...100).map { rand(65..90).chr }.join)
        get article.path
        article.update(title: (0...118).map { rand(65..90).chr }.join)
        get article.path
        expect(response.body).to include 'title'
      end
    end
    
      it 'renders a user index if there is a user with the username successfully' do
    expect(get: '/#{user.username}').to route_to(
      controller: 'stories',
      action: 'index',
      username: user.username,
    )
  end