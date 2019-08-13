
        
          def test_class
    o = class << Object.new; self; end
    assert_raise(TypeError) { Marshal.dump(o) }
    assert_equal(Object, Marshal.load(Marshal.dump(Object)))
    assert_equal(Enumerable, Marshal.load(Marshal.dump(Enumerable)))
  end
    
        # skip gzip header for now
    @io.string.unpack('C*')[10..-1].should == @zip.unpack('C*')[10..-1]
  end
    
      it 'inflates chunked data' do
    @chunks.map { |chunk| chunk.length }.should == [16384, 16384, 16384, 16384, 16384, 16384, 1696]
  end
    
      if rss_url && rss_url.length > 0
    blogs.push(Struct::Blog.new(name, web_url, rss_url))
  else
    unavailable.push(Struct::Blog.new(name, web_url, rss_url))
  end
end
    
          rescue_from Api::OpenidConnect::Error::InvalidRedirectUri do |e|
        validation_fail_redirect_uri(e)
      end
    
      def set_up_contacts
    if params[:a_id].present?
      @aspect = current_user.aspects.find(params[:a_id])
      gon.preloads[:aspect] = AspectPresenter.new(@aspect).as_json
    end
    @contacts_size = current_user.contacts.size
  end
    
        redirect_back fallback_location: stream_path
  end
    
    class NotificationsController < ApplicationController
  before_action :authenticate_user!
    
          def lines
        lines = []
        @diff.diff.split('\n')[2..-1].each_with_index do |line, line_index|
          lines << { :line  => line,
                     :class => line_class(line),
                     :ldln  => left_diff_line_number(0, line),
                     :rdln  => right_diff_line_number(0, line) }
        end if @diff
        lines
      end
    
        get '/history/A'
    
      test 'missing emoji' do
    get '/emoji/oggy_was_here'
    assert_equal 404, last_response.status
  end
    
      test 'clean path with double leading slash' do
    assert_equal '/Mordor', clean_path('//Mordor')
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
    
      end
end

    
      class Error < StandardError;
  end
    
    run SinatraStaticServer

    
    module Jekyll
    
        def get_web_content(url)
      raw_uri           = URI.parse url
      proxy             = ENV['http_proxy']
      if proxy
        proxy_uri       = URI.parse(proxy)
        https           = Net::HTTP::Proxy(proxy_uri.host, proxy_uri.port).new raw_uri.host, raw_uri.port
      else
        https           = Net::HTTP.new raw_uri.host, raw_uri.port
      end
      https.use_ssl     = true
      https.verify_mode = OpenSSL::SSL::VERIFY_NONE
      request           = Net::HTTP::Get.new raw_uri.request_uri
      data              = https.request request
    end
  end