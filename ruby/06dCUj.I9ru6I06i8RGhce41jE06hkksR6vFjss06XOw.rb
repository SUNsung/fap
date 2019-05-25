        # Mounts a shared folder via NFS. This assumes that the exports
        # via the host are already done.
        def mount_nfs(ip, folders)
          raise BaseError, _key: :unsupported_nfs
        end
    
                # Call the state method so that we update our index state. Don't
            # worry about exceptions here, since we just care about updating
            # the cache.
            begin
              # Called for side effects
              machine.state
            rescue Errors::VagrantError
            end
          end
        end
    
            # Set the name of the plugin. The moment that this is called, the
        # plugin will be registered and available. Before this is called, a
        # plugin does not exist. The name must be unique among all installed
        # plugins.
        #
        # @param [String] name Name of the plugin.
        # @return [String] The name of the plugin.
        def self.name(name=UNSET_VALUE)
          # Get or set the value first, so we have a name for logging when
          # we register.
          result = get_or_set(:name, name)
    
            # This is an internal initialize function that should never be
        # overridden. It is used to initialize some common internal state
        # that is used in a provider.
        def _initialize(name, machine)
          initialize_capabilities!(
            name.to_sym,
            { name.to_sym => [Class.new, nil] },
            Vagrant.plugin('2').manager.provider_capabilities,
            machine,
          )
        end
      end
    end
  end
end

    
    module TestIRB
  class TestContext < Test::Unit::TestCase
    class TestInputMethod < ::IRB::InputMethod
      attr_reader :list, :line_no
    
      def test_ed_newline_with_cr
    input_keys('ab')
    assert_byte_pointer_size('ab')
    assert_cursor(2)
    assert_cursor_max(2)
    refute(@line_editor.finished?)
    input_keys('\C-m', false)
    assert_line('ab')
    assert(@line_editor.finished?)
  end
    
          if defined?(::SCRIPT_LINES__[file]) && lines = ::SCRIPT_LINES__[file]
        code = ::SCRIPT_LINES__[file].join('')
      else
        begin
          code = File.read(file)
        rescue SystemCallError
          return
        end
      end
      if IRB.conf&.fetch(:MAIN_CONTEXT, nil)&.use_colorize?
        lines = Color.colorize_code(code).lines
      else
        lines = code.lines
      end
      pos -= 1
    
    class Scene
  def initialize
    @spheres = Array.new
    @spheres[0] = Sphere.new(Vec.new(-2.0, 0.0, -3.5), 0.5)
    @spheres[1] = Sphere.new(Vec.new(-0.5, 0.0, -3.0), 0.5)
    @spheres[2] = Sphere.new(Vec.new(1.0, 0.0, -2.2), 0.5)
    @plane = Plane.new(Vec.new(0.0, -0.5, 0.0), Vec.new(0.0, 1.0, 0.0))
  end
    
      failure_message_for_should do |actual|
    'expected #{actual.inspect} to have path #{expected.inspect} but was #{actual.current_path.inspect}'
  end
  failure_message_for_should_not do |actual|
    'expected #{actual.inspect} to not have path #{expected.inspect} but it had'
  end
end
    
          it 'succeeds on mobile' do
        get :public, format: :mobile
        expect(response).to be_success
      end
    end
    
          def versions
        i = @versions.size + 1
        @versions.map do |v|
          i -= 1
          { :id        => v.id,
            :id7       => v.id[0..6],
            :num       => i,
            :author    => v.author.name.respond_to?(:force_encoding) ? v.author.name.force_encoding('UTF-8') : v.author.name,
            :message   => v.message.respond_to?(:force_encoding) ? v.message.force_encoding('UTF-8') : v.message,
            :date      => v.authored_date.strftime('%B %d, %Y'),
            :gravatar  => Digest::MD5.hexdigest(v.author.email.strip.downcase),
            :identicon => self._identicon_code(v.author.email),
            :date_full => v.authored_date,
            :files     => v.stats.files.map { |f,*rest|
              page_path = extract_renamed_path_destination(f)
              page_path = remove_page_extentions(page_path)
              { :file => f,
                :link => '#{page_path}/#{v.id}'
              }
            }
          }
        end
      end
    
          def has_path
        !@path.nil?
      end
    
      test 'clean path with double leading slash' do
    assert_equal '/Mordor', clean_path('//Mordor')
  end
end
    
      teardown do
    FileUtils.rm_rf(@path)
  end
end

    
      # replace name version and date
  replace_header(head, :name)
  replace_header(head, :version)
  replace_header(head, :date)
  #comment this out if your rubyforge_project has a different name
  replace_header(head, :rubyforge_project)
    
        class MapGollum
      def initialize(base_path)
        @mg = Rack::Builder.new do
          
          map '/#{base_path}' do
            run Precious::App
          end
          map '/' do
            run Proc.new { [302, { 'Location' => '/#{base_path}' }, []] }
          end
          map '/*' do
            run Proc.new { [302, { 'Location' => '/#{base_path}' }, []] }
          end
          
        end
      end
    
    desc 'Generates a dummy app for testing for every Spree engine'
task :test_app do
  SPREE_GEMS.each do |gem_name|
    Dir.chdir('#{File.dirname(__FILE__)}/#{gem_name}') do
      sh 'rake test_app'
    end
  end
end
    
            def set_up_shipping_category
          if shipping_category = params[:product].delete(:shipping_category)
            id = ShippingCategory.find_or_create_by(name: shipping_category).id
            params[:product][:shipping_category_id] = id
          end
        end
      end
    end
  end
end

    
    RSpec.describe 'CommentMutes', type: :request do
  let(:original_commenter)                      { create(:user) }
  let(:other_commenter)                         { create(:user) }
  let(:article)                                 { create(:article) }
  let(:parent_comment_by_og)                    { create(:comment, commentable: article, user: original_commenter) }
  let(:child_of_parent_by_other)              { create(:comment, commentable: article, user: other_commenter, ancestry: parent_comment_by_og.id.to_s) }
  let(:child_of_child_by_og)                { create(:comment, commentable: article, user: original_commenter, ancestry: '#{parent_comment_by_og.id}/#{child_of_parent_by_other.id}') }
  let(:child_of_child_of_child_by_other)  { create(:comment, commentable: article, user: other_commenter, ancestry: '#{parent_comment_by_og.id}/#{child_of_parent_by_other.id}/#{child_of_child_by_og.id}') }
  let(:child_of_child_of_child_by_og)     { create(:comment, commentable: article, user: original_commenter, ancestry: '#{parent_comment_by_og.id}/#{child_of_parent_by_other.id}/#{child_of_child_by_og.id}/#{child_of_child_by_other.id}') }
  let(:child_of_child_by_other)             { create(:comment, commentable: article, user: other_commenter, ancestry: '#{parent_comment_by_og.id}/#{child_of_parent_by_other.id}') }
  let(:child2_of_child_of_child_by_og) { create(:comment, commentable: article, user: original_commenter, ancestry: '#{parent_comment_by_og.id}/#{child_of_parent_by_other.id}/#{child_of_child_by_other.id}') }
  let(:parent_comment_by_other) { create(:comment, commentable: article, user: other_commenter) }