
        
        class ActivityPub::Activity::Move < ActivityPub::Activity
  PROCESSING_COOLDOWN = 7.days.seconds
    
        describe '#perform' do
      subject { described_class.new(json, sender) }
    
          context '!reserved_username?' do
        let(:reserved_username) { false }
    
          context 'if the message chain initiated by recipient, but is not direct message' do
        let(:reply_to) { Fabricate(:status, account: recipient) }
        let(:activity) { Fabricate(:mention, account: recipient, status: Fabricate(:status, account: sender, visibility: :direct, thread: reply_to)) }
    
        context 'when parent status is private' do
      let(:visibility) { 'private' }
    
    @@ layout
<html>
  <head>
    <title>Super Simple Chat with Sinatra</title>
    <meta charset='utf-8' />
    <script src='http://ajax.googleapis.com/ajax/libs/jquery/1/jquery.min.js'></script>
  </head>
  <body><%= yield %></body>
</html>
    
            if has_vector?(request, headers)
          warn env, 'attack prevented by #{self.class}'
    
        it 'Reads referrer from Host header when Referer header is relative' do
      env = {'HTTP_HOST' => 'foo.com', 'HTTP_REFERER' => '/valid'}
      expect(subject.referrer(env)).to eq('foo.com')
    end
    
          @left_diff_line_number = nil
    
        assert_no_match /Delete this Page/, last_response.body, ''Delete this Page' link not blocked in page template'
    assert_no_match /New/,              last_response.body, ''New' button not blocked in page template'
    assert_no_match /Upload/,           last_response.body, ''Upload' link not blocked in page template'
    assert_no_match /Rename/,           last_response.body, ''Rename' link not blocked in page template'
    assert_no_match /Edit/,             last_response.body, ''Edit' link not blocked in page template'
    
    context 'Frontend with lotr' do
  include Rack::Test::Methods
    
      test 'h1 title sanitizes correctly' do
    title = 'H1'
    @wiki.write_page(title, :markdown, '# 1 & 2 <script>alert('js')</script>' + '\n # 3', commit_details)
    page = @wiki.page(title)
    
        @wiki.update_page(@wiki.page('k'), nil, nil, '다른 text', {})
    @wiki = Gollum::Wiki.new(@path)
    page  = @wiki.page('k')
    assert_equal '다른 text', utf8(page.raw_data)
    
        EMOJI_PATHNAME = Pathname.new(Gemojione.images_path).freeze
    
      s.add_dependency 'gollum-lib', '~> 4.2', '>= 4.2.10'
  s.add_dependency 'kramdown', '~> 1.9.0'
  s.add_dependency 'sinatra', '~> 1.4', '>= 1.4.4'
  s.add_dependency 'mustache', ['>= 0.99.5', '< 1.0.0']
  s.add_dependency 'useragent', '~> 0.16.2'
  s.add_dependency 'gemojione', '~> 3.2'
    
    # Set ruby to UTF-8 mode
# This is required for Ruby 1.8.7 which gollum still supports.
$KCODE = 'U' if RUBY_VERSION[0, 3] == '1.8'
    
        def render(context)
      quote = paragraphize(super)
      author = '<strong>#{@by.strip}</strong>' if @by
      if @source
        url = @source.match(/https?:\/\/(.+)/)[1].split('/')
        parts = []
        url.each do |part|
          if (parts + [part]).join('/').length < 32
            parts << part
          end
        end
        source = parts.join('/')
        source << '/&hellip;' unless source == @source
      end
      if !@source.nil?
        cite = ' <cite><a href='#{@source}'>#{(@title || source)}</a></cite>'
      elsif !@title.nil?
        cite = ' <cite>#{@title}</cite>'
      end
      blockquote = if @by.nil?
        quote
      elsif cite
        '#{quote}<footer>#{author + cite}</footer>'
      else
        '#{quote}<footer>#{author}</footer>'
      end
      '<blockquote>#{blockquote}</blockquote>'
    end