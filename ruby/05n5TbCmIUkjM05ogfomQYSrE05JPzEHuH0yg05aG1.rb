
        
              it 'does set the output directory' do
        result = Fastlane::FastFile.new.parse('lane :test do
            cloc(output_directory: '/tmp')
          end').runner.execute(:test)
    
          it 'pass a custom build number to the tool' do
        result = Fastlane::FastFile.new.parse('lane :test do
          increment_build_number(build_number: 24, xcodeproj: '.xcproject')
        end').runner.execute(:test)
    
        def add_entry(entry)
      if @index.add?(entry.as_json.to_s)
        @entries << entry.dup
        @types[entry.type].count += 1 if entry.type
      end
    end
    
              node.css('> ul > li > a').each do |link|
            n = link.content
            next if n.start_with?('Ex: ') || n.start_with?('Default ') || n =~ /example/i || IGNORE_ENTRIES.include?(n)
            id = link['href'].remove('#')
            n.downcase!
            n.prepend '#{name}: '
            entries << [n, id]
          end
        end
    
            css('code code').each do |node|
          node.before(node.children).remove
        end
    
      def intersect(ray, isect)
    rs = ray.org.vsub(@center)
    b = rs.vdot(ray.dir)
    c = rs.vdot(rs) - (@radius * @radius)
    d = b * b - c
    if d > 0.0 then
      t = - b - Math.sqrt(d)
    
    
# modified by K.Sasada
    
        def find_remote!(username, domain)
      find_remote(username, domain) || raise(ActiveRecord::RecordNotFound)
    end
    
      def remote_url
    object.remote_url.presence
  end
    
    namespace :emojis do
  desc 'Generate a unicode to filename mapping'
  task :generate do
    source = 'http://www.unicode.org/Public/emoji/5.0/emoji-test.txt'
    codes  = []
    dest   = Rails.root.join('app', 'javascript', 'mastodon', 'features', 'emoji', 'emoji_map.json')
    
          it 'sets the regeneration marker to expire' do
        allow(RegenerationWorker).to receive(:perform_async)
        get :show
        expect(Redis.current.ttl('account:#{user.account_id}:regeneration')).to be >= 0
      end
    
    class ManifestSerializer < ActiveModel::Serializer
  include RoutingHelper
  include ActionView::Helpers::TextHelper