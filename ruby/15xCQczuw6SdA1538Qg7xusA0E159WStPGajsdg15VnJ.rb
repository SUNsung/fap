
        
                  <<-SQL.strip_heredoc
            (CASE
              WHEN (#{builds}) = (#{skipped}) AND (#{warnings}) THEN #{STATUSES[:success]}
              WHEN (#{builds}) = (#{skipped}) THEN #{STATUSES[:skipped]}
              WHEN (#{builds}) = (#{success}) THEN #{STATUSES[:success]}
              WHEN (#{builds}) = (#{created}) THEN #{STATUSES[:created]}
              WHEN (#{builds}) = (#{success}) + (#{skipped}) THEN #{STATUSES[:success]}
              WHEN (#{builds}) = (#{success}) + (#{skipped}) + (#{canceled}) THEN #{STATUSES[:canceled]}
              WHEN (#{builds}) = (#{created}) + (#{skipped}) + (#{pending}) THEN #{STATUSES[:pending]}
              WHEN (#{running}) + (#{pending}) > 0 THEN #{STATUSES[:running]}
              WHEN (#{manual}) > 0 THEN #{STATUSES[:manual]}
              WHEN (#{created}) > 0 THEN #{STATUSES[:running]}
              ELSE #{STATUSES[:failed]}
            END)
          SQL
        end
      end
    
              pipelines.each do |pipeline|
            self.new(pipeline).tap do |preloader|
              preloader.preload_commit_authors
              preloader.preload_pipeline_warnings
              preloader.preload_stages_warnings
            end
          end
        end
    
            def representation_class
          Representation::Note
        end
    
            def issuable_type
          pull_request? ? 'MergeRequest' : 'Issue'
        end
      end
    end
  end
end

    
    module Gitlab
  module GithubImport
    module Representation
      class User
        include ToHash
        include ExposeAttribute
    
          it 'creates a new user' do
        visit new_admin_user_path
        fill_in 'Email', with: 'test@test.com'
        fill_in 'Username', with: 'usertest'
        fill_in 'Password', with: '12345678'
        fill_in 'Password confirmation', with: '12345678'
        click_on 'Create User'
        expect(page).to have_text('User 'usertest' was successfully created.')
        expect(page).to have_text('test@test.com')
      end
    
        describe 'with block' do
      it 'returns a nav link with menu' do
        stub(self).current_page?('/things') { false }
        stub(self).current_page?('/things/stuff') { false }
        nav = nav_link('Things', '/things') { nav_link('Stuff', '/things/stuff') }
        expect(nav).to be_html_safe
        a0 = Nokogiri(nav).at('li.dropdown.dropdown-hover:not(.active) > a[href='/things']')
        expect(a0).to be_a Nokogiri::XML::Element
        expect(a0.text.strip).to eq('Things')
        a1 = Nokogiri(nav).at('li.dropdown.dropdown-hover:not(.active) > li:not(.active) > a[href='/things/stuff']')
        expect(a1).to be_a Nokogiri::XML::Element
        expect(a1.text.strip).to eq('Stuff')
      end
    
      it 'converts values to Float' do
    expect(location.lat).to be_a Float
    expect(location.lat).to eq 2.0
    expect(location.lng).to be_a Float
    expect(location.lng).to eq 3.0
    expect(location.radius).to be_a Float
    expect(location.radius).to eq 300.0
    expect(location.speed).to be_a Float
    expect(location.speed).to eq 2.0
    expect(location.course).to be_a Float
    expect(location.course).to eq 30.0
  end
    
          expect(Utils.unindent(<<-MD)).to eq('Hello World\nThis is\nnot indented')
        Hello World
        This is
        not indented
      MD
    
              results
        end
    
        if GitHub.api_credentials_type == :none
      puts <<~EOS
        You can create a new personal access token:
          #{GitHub::ALL_SCOPES_URL}
        #{Utils::Shell.set_variable_in_profile('HOMEBREW_GITHUB_API_TOKEN', 'your_token_here')}
    
        if other.respond_to?(:to_str)
      return true if to_str == other.to_str
    end
    
    module Homebrew
  module_function