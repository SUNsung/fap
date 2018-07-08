
        
        #
    
    require 'bundler/setup'
require 'json'
require 'stackprof'
require File.expand_path('../lib/jekyll', __dir__)
    
    # Create an array of vendored mimetype => [extensions]
mimes = {}
json = open('https://raw.githubusercontent.com/jshttp/mime-db/master/db.json').read
data = JSON.parse(json)
data.reject! { |mime, meta| meta['extensions'].nil? || meta['extensions'].empty? }
data.each do |mime, meta|
  # Normalize extensions and mime-types
  mime = mime.downcase.strip
  extensions = meta['extensions'].map { |e| e.downcase.strip }.compact
    
      def remote_url
    object.remote_url.presence
  end
    
    def codepoints_to_filename(codepoints)
  codepoints.downcase.gsub(/\A[0]+/, '').tr(' ', '-')
end