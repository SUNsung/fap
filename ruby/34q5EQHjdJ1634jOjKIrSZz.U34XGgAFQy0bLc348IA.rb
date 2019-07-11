
        
                a_length = a_split.length
        b_length = b_split.length
    
          private
    
            css('code code').each do |node|
          node.before(node.children).remove
        end
    
            css('.status-badge').each do |node|
          node.name = 'code'
          node.content = node.content.strip
          node.remove_attribute('class')
        end
    
            css('h2:not([id]) a[id]:not([href])').each do |node|
          node.parent['id'] = node['id']
          node.before(node.children).remove
        end
    
    context 'Precious::Views::LatestChanges' do
  include Rack::Test::Methods
  
  def app
    Precious::App
  end
  
  setup do
    @path = cloned_testpath('examples/lotr.git')
    @wiki = Gollum::Wiki.new(@path)
    Precious::App.set(:gollum_path, @path)
    Precious::App.set(:wiki_options, {:latest_changes_count => 10})
  end
    
        @view = Precious::Views::Page.new
    @view.instance_variable_set :@page, page
    @view.instance_variable_set :@content, page.formatted_data
    @view.instance_variable_set :@h1_title, true
    
      test 'heavy use 1' do
    post '/create', :content => '한글 text', :page => 'PG',
         :format             => 'markdown', :message => 'def'
    follow_redirect!
    assert last_response.ok?
    
      s.authors  = ['Tom Preston-Werner', 'Rick Olson']
  s.email    = 'tom@github.com'
  s.homepage = 'http://github.com/gollum/gollum'
    
          rtn = ''
      (context.environments.first['site'][@array_name] || []).each do |file|
        if file !~ /^[a-zA-Z0-9_\/\.-]+$/ || file =~ /\.\// || file =~ /\/\./
          rtn = rtn + 'Include file '#{file}' contains invalid characters or sequences'
        end
    
        def poster
      'poster='#{@poster}'' if @poster
    end