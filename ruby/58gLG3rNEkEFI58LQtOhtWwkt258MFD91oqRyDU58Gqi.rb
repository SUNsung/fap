  class FeatureTopicUsers < Jobs::Base
    
    links.each do |link|
  href = link.attribute('href').to_s
  uri = URI.join(BASE_URI, href)
  if map[uri]
    dups <<  href
  end
  map[uri] = href
end
    
            def on_send(node)
          return unless match_call?(node) &&
                        (!node.value_used? || only_truthiness_matters?(node)) &&
                        !(node.parent && node.parent.block_type?)
    
            def on_send(node)
          return unless multiple_compare?(node)
    
            def immutable_literal?(node)
          return true if node.immutable_literal?