
        
        links.each do |link|
  href = link.attribute('href').to_s
  uri = URI.join(BASE_URI, href)
  if map[uri]
    dups <<  href
  end
  map[uri] = href
end
    
    invalids = []
Parallel.each(links, in_threads: 4) do |link|
  href = link.attribute('href').to_s
  begin
    case check_link(URI.join(BASE_URI, href))
    when (200...300)
      putc('.')
    when (300..302)
      putc('w')
    end
  rescue => e
    putc('F')
    invalids << '#{href} (reason: #{e.message})'
  end
end
    
      attributes :id, :type, :name, :updated
    
      def icons
    [
      {
        src: '/android-chrome-192x192.png',
        sizes: '192x192',
        type: 'image/png',
      },
    ]
  end
    
    require 'rails_helper'
    
          rescue_from Api::OpenidConnect::Error::InvalidRedirectUri do |e|
        validation_fail_redirect_uri(e)
      end