
        
          def test_escape_javascript
    assert_equal '', escape_javascript(nil)
    assert_equal %(This \\'thing\\' is really\\n netos\\'), escape_javascript(%(This 'thing' is really\n netos'))
    assert_equal %(backslash\\\\test), escape_javascript(%(backslash\\test))
    assert_equal %(dont <\\/close> tags), escape_javascript(%(dont </close> tags))
    assert_equal %(unicode &#x2028; newline), escape_javascript(%(unicode \342\200\250 newline).dup.force_encoding(Encoding::UTF_8).encode!)
    assert_equal %(unicode &#x2029; newline), escape_javascript(%(unicode \342\200\251 newline).dup.force_encoding(Encoding::UTF_8).encode!)
    
          # Returns an escaped version of +html+ without affecting existing escaped entities.
      #
      #   escape_once('1 < 2 &amp; 3')
      #   # => '1 &lt; 2 &amp; 3'
      #
      #   escape_once('&lt;&lt; Accept & Checkout')
      #   # => '&lt;&lt; Accept &amp; Checkout'
      def escape_once(html)
        ERB::Util.html_escape_once(html)
      end
    
            def test_url_host_no_db
          spec = resolve 'abstract://foo?encoding=utf8'
          assert_equal({
            'adapter'  => 'abstract',
            'host'     => 'foo',
            'encoding' => 'utf8' }, spec)
        end
    
        def call(env)
      result = @app.call(env)
      result[1]['Middleware-Test'] = 'Success'
      result[1]['Middleware-Order'] = 'First'
      result
    end
  end
    
        private
      # 'Deserialize' the mailer class name by hand in case another argument
      # (like a Global ID reference) raised DeserializationError.
      def mailer_class
        if mailer = Array(@serialized_arguments).first || Array(arguments).first
          mailer.constantize
        end
      end
    
    module Rails
  module Generators
    class MailerGenerator < NamedBase
      source_root File.expand_path('templates', __dir__)
    
      # Skips the current run on Rubinius using Minitest::Assertions#skip
  private def rubinius_skip(message = '')
    skip message if RUBY_ENGINE == 'rbx'
  end
  # Skips the current run on JRuby using Minitest::Assertions#skip
  private def jruby_skip(message = '')
    skip message if defined?(JRUBY_VERSION)
  end
end

    
          {
          author: last_git_commit_formatted_with('%an'),
          message: last_git_commit_formatted_with('%B'),
          commit_hash: last_git_commit_formatted_with('%H'),
          abbreviated_commit_hash: last_git_commit_formatted_with('%h')
      }
    end
    
          def initialize(adb_path: nil)
        self.adb_path = adb_path
      end
    
            expect(result).to eq('/usr/local/bin/cloc  --by-file --xml  --out=build/cloc.xml MyCoolApp')
      end
    
        def ensure_id_sequences_exist
      # Find tables using timestamp IDs.
      connection.tables.each do |table|
        # We're only concerned with 'id' columns.
        next unless (id_col = connection.columns(table).find { |col| col.name == 'id' })
    
      def meta
    object.file.meta
  end
end

    
      describe 'GET #show' do
    let!(:tag)     { Fabricate(:tag, name: 'test') }
    let!(:local)   { Fabricate(:status, tags: [tag], text: 'local #test') }
    let!(:remote)  { Fabricate(:status, tags: [tag], text: 'remote #test', account: Fabricate(:account, domain: 'remote')) }
    let!(:late)    { Fabricate(:status, tags: [tag], text: 'late #test') }
    
    class ActivityPub::EmojiSerializer < ActiveModel::Serializer
  include RoutingHelper
    
      context 'called with two sizes' do
    it 'applies to alternating sides' do
      rule = 'padding: 2px 3px'
    
      context 'called with auto' do
    it 'applies to auto to height' do
      rule = 'height: auto; width: 100px;'