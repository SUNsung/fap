
        
          def test_vi_paste_next
    input_keys('abcde\C-[3h')
    assert_line('abcde')
    assert_byte_pointer_size('a')
    assert_cursor(1)
    assert_cursor_max(5)
    input_keys('p')
    assert_line('abcde')
    assert_byte_pointer_size('a')
    assert_cursor(1)
    assert_cursor_max(5)
    input_keys('d$')
    assert_line('a')
    assert_byte_pointer_size('')
    assert_cursor(0)
    assert_cursor_max(1)
    input_keys('p')
    assert_line('abcde')
    assert_byte_pointer_size('abcd')
    assert_cursor(4)
    assert_cursor_max(5)
    input_keys('2p')
    assert_line('abcdebcdebcde')
    assert_byte_pointer_size('abcdebcdebcd')
    assert_cursor(12)
    assert_cursor_max(13)
  end
    
    class Vec
  def initialize(x, y, z)
    @x = x
    @y = y
    @z = z
  end
    
    FIRST     = -> l { LEFT[RIGHT[l]] }
IF        = -> b { b }
LEFT      = -> p { p[-> x { -> y { x } } ] }
RIGHT     = -> p { p[-> x { -> y { y } } ] }
IS_EMPTY  = LEFT
REST      = -> l { RIGHT[RIGHT[l]] }
    
    Given(/^a stage file named (.+)$/) do |filename|
  TestApp.write_local_stage_file(filename)
end
    
          class Properties
        def initialize
          @properties = {}
        end
    
          def role_properties_for(rolenames)
        roles = rolenames.to_set
        rps = Set.new unless block_given?
        roles_for(rolenames).each do |host|
          host.roles.intersection(roles).each do |role|
            [host.properties.fetch(role)].flatten(1).each do |props|
              if block_given?
                yield host, role, props
              else
                rps << (props || {}).merge(role: role, hostname: host.hostname)
              end
            end
          end
        end
        block_given? ? nil : rps
      end
    
    set_if_empty :default_env, {}
set_if_empty :keep_releases, 5
    
          attr_reader :page, :name
    
          def title
        @page.title
      end
    
          # Returns page content without title if it was extracted.
      #
      def content_without_page_header(content)
        doc = build_document(content)
          if @h1_title
            title = find_header_node(doc)
            title.remove unless title.empty?
          end
        # .inner_html will cause href escaping on UTF-8
        doc.css('div#gollum-root').children.to_xml(@@to_xml)
      end
    end
  end
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
    
          ws  = WorkSpace.new(binding)
      irb = Irb.new(ws)
    
        it 'accepts jsfiddle link with a / at the end' do
      jsfiddle_link = 'http://jsfiddle.net/link2twenty/v2kx9jcd/'
      expect do
        generate_new_liquid(jsfiddle_link)
      end.not_to raise_error
    end
    
      def permitted_attributes_for_preview
    %i[body_markdown]
  end
    
          it 'unmutes the parent comment if already muted' do
        sign_in original_commenter
        parent_comment_by_og.update(receive_notifications: false)
        patch '/comment_mutes/#{parent_comment_by_og.id}', params: { comment: { receive_notifications: 'true' } }
        expect(parent_comment_by_og.reload.receive_notifications).to eq true
      end
    end